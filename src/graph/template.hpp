#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> struct Edge {
  int from, to;
  T cost;
  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost) {}
};

template <typename T = long long> using Edges = vector<Edge<T>>;

template <typename T = long long> using Matrix = vector<vector<T>>;
