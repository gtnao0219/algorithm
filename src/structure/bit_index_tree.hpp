#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct BIT {
private:
  int n;
  vector<T> bit;

public:
  BIT(int n) : n(n), bit(n + 1, 0) {}

  // i is 0-indexed.
  void add(int i, T x) {
    for (++i; i <= n + 1; i += i & -i) {
      bit[i] += x;
    }
  }

  // [0, i), i is 0-indexed.
  T sum(int i) {
    T res = 0;
    for (; i > 0; i -= i & -i) {
      res += bit[i];
    }
    return res;
  }

  // [l, r), l and r is 0-indexed.
  T sum(int l, int r) { return sum(r) - sum(l); }
};
