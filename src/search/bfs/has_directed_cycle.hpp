#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./topological_sort.hpp"

bool has_directed_cycle(const vector<vector<int>> &g) {
  vector<int> orders = topological_sort(g);
  int n = g.size();
  return (int)orders.size() != n;
}
