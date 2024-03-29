#pragma once

#include <bits/stdc++.h>
#include <limits>
using namespace std;

#include "./template.hpp"

template <typename T> struct Dijkstra {
private:
  int n;
  int start;
  Graph<T> graph;
  vector<T> dist;
  using P = pair<T, int>;
  priority_queue<P, vector<P>, greater<P>> que;
  T MAX = numeric_limits<T>::max();

public:
  Dijkstra(int n, int start) : n(n), start(start), graph(n) {
    dist.resize(n, MAX);
    dist[start] = 0;
    que.push(P(0, start));
  }

  void add_edge(int start, int to, T cost) {
    graph[start].emplace_back(start, to, cost);
  }

  void build() {
    while (!que.empty()) {
      P p = que.top();
      que.pop();
      int current = p.second;
      if (dist[current] < p.first) {
        continue;
      }
      for (auto &e : graph[current]) {
        if (dist[e.to] > dist[current] + e.cost) {
          dist[e.to] = dist[current] + e.cost;
          que.push(P(dist[e.to], e.to));
        }
      }
    }
  }

  T shortest_path_value(int t) { return dist[t]; }

  bool is_unreachable(int t) { return dist[t] == MAX; }
};
