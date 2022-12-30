#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename Monoid, typename Action> struct LazySegmentTree {
private:
  using FuncMonoid = function<Monoid(Monoid, Monoid)>;
  using FuncAction = function<void(Monoid &, Action)>;
  using FuncComposition = function<void(Action &, Action)>;
  FuncMonoid func_monoid;
  FuncAction func_action;
  FuncComposition func_composition;
  const Monoid identity_monoid;
  const Action identity_action;
  vector<Monoid> data;
  vector<Action> lazy;
  int leaf_n;

public:
  LazySegmentTree(int n, const FuncMonoid fm, const FuncAction fa,
                  const FuncComposition fc, const Monoid &im, const Action &ia)
      : func_monoid(fm), func_action(fa), func_composition(fc),
        identity_monoid(im), identity_action(ia) {
    leaf_n = 1;
    while (leaf_n < n) {
      leaf_n *= 2;
    }
    int data_n = leaf_n * 2;
    data.assign(data_n, identity_monoid);
    lazy.assign(data_n, identity_action);
  }

  // a is 0-indexed.
  void set(int a, const Monoid &v) { data[a + leaf_n] = v; }

  void build() {
    for (int k = leaf_n - 1; k > 0; --k) {
      data[k] = func_monoid(data[2 * k], data[2 * k + 1]);
    }
  }

  // [a, b), a and b are 0-indexed
  void update(int a, int b, const Action &v) { _update(a, b, v, 1, 0, leaf_n); }

  // [a, b), a and b are 0-indexed
  Monoid query(int a, int b) { return _query(a, b, 1, 0, leaf_n); }

  // a is 0-indexed.
  Monoid operator[](int a) const { return data[a + leaf_n]; }

private:
  void evaluate(int k) {
    if (lazy[k] == identity_action) {
      return;
    }
    if (k < leaf_n) {
      func_composition(lazy[2 * k], lazy[k]);
      func_composition(lazy[2 * k + 1], lazy[k]);
    }
    func_action(data[k], lazy[k]);
    lazy[k] = identity_action;
  }

  Monoid _query(int a, int b, int k, int l, int r) {
    evaluate(k);

    if (r <= a || b <= l) {
      return identity_monoid;
    }
    if (a <= l && r <= b) {
      return data[k];
    }
    return func_monoid(_query(a, b, 2 * k, l, (l + r) / 2),
                       _query(a, b, 2 * k + 1, (l + r) / 2, r));
  }

  void _update(int a, int b, const Action &v, int k, int l, int r) {
    evaluate(k);

    if (r <= a || b <= l) {
      return;
    }
    if (a <= l && r <= b) {
      func_composition(lazy[k], v);
      evaluate(k);
      return;
    }
    _update(a, b, v, 2 * k, l, (l + r) / 2);
    _update(a, b, v, 2 * k + 1, (l + r) / 2, r);
    data[k] = func_monoid(data[2 * k], data[2 * k + 1]);
  }
};
