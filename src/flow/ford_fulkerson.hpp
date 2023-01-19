#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct FordFulkerson {
private:
  struct Edge {
    int from;
    int to;
    T cap;
    int rev;
    bool is_rev;
  };
  T INF = numeric_limits<T>::max();
  int n;
  vector<vector<Edge>> graph;
  vector<bool> used;

public:
  FordFulkerson(int n) : n(n), graph(n), used(n) {}

  void add_edge(int from, int to, T cap) {
    graph[from].emplace_back(
        (Edge){from, to, cap, (int)graph[to].size(), false});
    graph[to].emplace_back(
        (Edge){to, from, 0, (int)graph[from].size() - 1, true});
  }

  T max_flow(int s, int t) {
    T ret = 0;
    while (true) {
      used.assign(n, false);
      T flow = dfs(s, t, INF);
      if (flow == 0) {
        return ret;
      }
      ret += flow;
    }
    return ret;
  }

private:
  T dfs(int v, int t, T f) {
    if (v == t) {
      return f;
    }
    used[v] = true;
    for (auto &e : graph[v]) {
      if (!used[e.to] && e.cap > 0) {
        T d = dfs(e.to, t, min(f, e.cap));
        if (d > 0) {
          e.cap -= d;
          graph[e.to][e.rev].cap += d;
          return d;
        }
      }
    }
    return 0;
  }
};
