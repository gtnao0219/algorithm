#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct WeightedUnionFindTree {
private:
  int n;
  vector<int> parent, rank;
  vector<T> weight;

public:
  WeightedUnionFindTree(int n)
      : n(n), parent(n, -1), rank(n, 0), weight(n, 0) {}

  int root(int x) {
    if (parent[x] == -1) {
      return x;
    }
    int p = root(parent[x]);
    weight[x] += weight[parent[x]];
    return parent[x] = p;
  }

  void unite(int x, int y, T w) {
    w += calc_weight(x);
    w -= calc_weight(y);
    x = root(x);
    y = root(y);
    if (x == y) {
      return;
    }
    if (rank[x] < rank[y]) {
      swap(x, y);
      w = -w;
    }
    if (rank[x] == rank[y]) {
      ++rank[x];
    }
    parent[y] = x;
    weight[y] = w;
  }

  bool is_same(int x, int y) { return root(x) == root(y); }

  T calc_weight(int x) {
    root(x);
    return weight[x];
  }

  T diff(int x, int y) { return calc_weight(y) - calc_weight(x); }
};
