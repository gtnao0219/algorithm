#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct Dinic {
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
  vector<int> min_cost;
  vector<int> iter;

public:
  Dinic(int n) : n(n), graph(n) {}

  void add_edge(int from, int to, T cap) {
    graph[from].emplace_back(
        (Edge){from, to, cap, (int)graph[to].size(), false});
    graph[to].emplace_back(
        (Edge){to, from, 0, (int)graph[from].size() - 1, true});
  }

  T max_flow(int s, int t) {
    T ret = 0;
    iter.assign(n, 0);
    while (true) {
      bfs(s);
      if (min_cost[t] == -1) {
        return ret;
      }
      iter.assign(n, 0);
      while (true) {
        T flow = dfs(s, t, INF);
        if (flow == 0) {
          break;
        }
        ret += flow;
      }
    }
    return ret;
  }

private:
  void bfs(int s) {
    min_cost.assign(n, -1);
    queue<int> que;
    min_cost[s] = 0;
    que.push(s);
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (auto &e : graph[v]) {
        if (e.cap > 0 && min_cost[e.to] < 0) {
          min_cost[e.to] = min_cost[v] + 1;
          que.push(e.to);
        }
      }
    }
  }

  T dfs(int v, int t, T f) {
    if (v == t) {
      return f;
    }
    for (int &i = iter[v]; i < graph[v].size(); i++) {
      Edge &e = graph[v][i];
      if (e.cap > 0 && min_cost[v] < min_cost[e.to]) {
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
