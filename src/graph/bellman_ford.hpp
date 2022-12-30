#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./template.hpp"

template <typename T> struct BellmanFord {
private:
  int n;
  int start;
  Edges<T> edges;
  vector<T> dist;
  bool _has_negative_cycle = false;
  T MAX = numeric_limits<T>::max();

public:
  BellmanFord(int n, int start) : n(n), start(start) {
    dist.resize(n, MAX);
    dist[start] = 0;
  }

  void add_edge(int start, int to, long long cost) {
    edges.emplace_back(start, to, cost);
  }

  void build() {
    for (int i = 0; i < n - 1; ++i) {
      for (auto &edge : edges) {
        if (dist[edge.from] == MAX) {
          continue;
        }
        dist[edge.to] = min(dist[edge.to], dist[edge.from] + edge.cost);
      }
    }
    for (auto &edge : edges) {
      if (dist[edge.from] == MAX) {
        continue;
      }
      if (dist[edge.to] > dist[edge.from] + edge.cost) {
        _has_negative_cycle = true;
        break;
      }
    }
  }

  T shortest_path_value(int t) { return dist[t]; }

  bool is_unreachable(int t) { return dist[t] == MAX; }

  bool has_negative_cycle() { return _has_negative_cycle; }
};
