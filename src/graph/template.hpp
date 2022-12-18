#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int> struct Edge {
  int from, to;
  T cost;
  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost) {}
};

template <typename T = int> using Edges = vector<Edge<T>>;
