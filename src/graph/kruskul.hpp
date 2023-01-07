#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "../structure/union_find_tree.hpp"
#include "./template.hpp"

template <typename T> struct Kruskal {
private:
  int v;
  Edges<T> es;
  UnionFindTree uft;
  long long cost_sum = 0;
  Edges<T> ans_es;

public:
  Kruskal(int v) : v(v), uft(v) {}

  void add_edge(int from, int to, T cost) { es.emplace_back(from, to, cost); }

  void build() {
    sort(es.begin(), es.end(), [](const Edge<T> &e1, const Edge<T> &e2) {
      return e1.cost < e2.cost;
    });
    for (Edge<T> &e : es) {
      if (!uft.is_same(e.from, e.to)) {
        uft.unite(e.from, e.to);
        cost_sum += e.cost;
        ans_es.emplace_back(e);
      }
    }
  }

  T get_cost_sum() { return cost_sum; }

  Edges<T> get_edges() { return ans_es; }
};
