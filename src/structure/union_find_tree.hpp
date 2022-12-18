#pragma once

#include <bits/stdc++.h>
using namespace std;

struct UnionFindTree {
private:
  int n;
  vector<int> parent, rank;

public:
  UnionFindTree(int n) : n(n), parent(n, -1), rank(n, 0) {}

  int root(int x) {
    if (parent[x] == -1) {
      return x;
    }
    return parent[x] = root(parent[x]);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) {
      return;
    }
    if (rank[x] < rank[y]) {
      swap(x, y);
    }
    if (rank[x] == rank[y]) {
      ++rank[x];
    }
    parent[y] = x;
  }

  bool is_same(int x, int y) { return root(x) == root(y); }
};
