#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename FlowT, typename CostT> struct PrimalDual {
private:
  struct Edge {
    int from;
    int to;
    FlowT cap;
    CostT cost;
    int rev;
    bool is_rev;
  };
  CostT INF = numeric_limits<CostT>::max();
  int n;
  vector<vector<Edge>> graph;
  using Pi = pair<CostT, int>;
  priority_queue<Pi, vector<Pi>, greater<Pi>> que;
  vector<CostT> potential, min_cost;
  vector<int> prevv, preve;

public:
  PrimalDual(int n)
      : n(n), graph(n), potential(n), min_cost(n), prevv(n, -1), preve(n, -1) {}

  void add_edge(int from, int to, FlowT cap, CostT cost) {
    graph[from].emplace_back(
        (Edge){from, to, cap, cost, (int)graph[to].size(), false});
    graph[to].emplace_back(
        (Edge){to, from, 0, -cost, (int)graph[from].size() - 1, true});
  }

  CostT min_cost_flow(int s, int t, FlowT f) {
    CostT ret = 0;
    while (f > 0) {
      min_cost.assign(n, INF);
      que.emplace(0, s);
      min_cost[s] = 0;
      while (!que.empty()) {
        Pi p = que.top();
        que.pop();
        if (min_cost[p.second] < p.first)
          continue;
        for (int i = 0; i < (int)graph[p.second].size(); ++i) {
          Edge &e = graph[p.second][i];
          CostT next_cost = min_cost[p.second] + e.cost + potential[p.second] -
                            potential[e.to];
          if (e.cap > 0 && min_cost[e.to] > next_cost) {
            min_cost[e.to] = next_cost;
            prevv[e.to] = p.second;
            preve[e.to] = i;
            que.emplace(min_cost[e.to], e.to);
          }
        }
      }
      if (min_cost[t] == INF)
        return -1;
      for (int v = 0; v < n; ++v) {
        potential[v] += min_cost[v];
      }
      FlowT add_flow = f;
      for (int v = t; v != s; v = prevv[v]) {
        add_flow = min(add_flow, graph[prevv[v]][preve[v]].cap);
      }
      f -= add_flow;
      ret += add_flow * potential[t];
      for (int v = t; v != s; v = prevv[v]) {
        Edge &e = graph[prevv[v]][preve[v]];
        e.cap -= add_flow;
        graph[v][e.rev].cap += add_flow;
      }
    }
    return ret;
  }
};
