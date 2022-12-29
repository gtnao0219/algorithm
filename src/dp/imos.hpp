#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct ImosInterval {
  // [l, r), l and r is 0-indexed.
  int l, r;
  T v;
};

template <typename T> struct Imos {
private:
  int n;
  vector<T> s;

public:
  Imos(int n, const vector<ImosInterval<T>> &intervals) : n(n) {
    s.resize(n + 1, 0);
    for (auto interval : intervals) {
      s[interval.l] += interval.v;
      s[interval.r] -= interval.v;
    }
    for (int i = 0; i < n; ++i) {
      s[i + 1] += s[i];
    }
  }

  // i is 0-indexed.
  T get(int i) { return s[i]; }
};
