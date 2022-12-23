#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename Monoid> struct SegmentTree {
private:
  using BinaryOperation = function<Monoid(Monoid, Monoid)>;
  const BinaryOperation binary_operation;
  const Monoid identity_element;

  int leaf_n;
  vector<Monoid> data;

public:
  SegmentTree(int n, const BinaryOperation bo, const Monoid ie)
      : binary_operation(bo), identity_element(ie) {
    leaf_n = 1;
    while (leaf_n < n) {
      leaf_n *= 2;
    }
    int data_n = leaf_n * 2;
    data.assign(data_n, identity_element);
  }

  // i is 0-indexed.
  void set(int i, const Monoid &v) { data[i + leaf_n] = v; }

  void build() {
    for (int i = leaf_n - 1; i > 0; --i) {
      data[i] = binary_operation(data[2 * i], data[2 * i + 1]);
    }
  }

  // i is 0-indexed.
  void update(int i, const Monoid &v) {
    i += leaf_n;
    data[i] = v;
    while (i >>= 1) {
      data[i] = binary_operation(data[2 * i], data[2 * i + 1]);
    }
  }

  // [i, j), i and j are 0-indexed
  Monoid query(int i, int j) {
    Monoid v_left = identity_element, v_right = identity_element;
    for (int left = i + leaf_n, right = j + leaf_n; left < right;
         left >>= 1, right >>= 1) {
      if (left & 1) {
        v_left = binary_operation(v_left, data[left++]);
      }
      if (right & 1) {
        v_right = binary_operation(data[--right], v_right);
      }
    }
    return binary_operation(v_left, v_right);
  }

  // i is 0-indexed.
  Monoid operator[](int i) const { return data[i + leaf_n]; }
};
