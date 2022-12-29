#pragma once

#include <bits/stdc++.h>
using namespace std;

// x and y is 0-indexed.
struct Imos2dPoint {
  int x, y;
};
// [start, end)
template <typename T> struct Imos2dInterval {
  Imos2dPoint start, end;
  T v;
};

template <typename T> struct Imos2d {
private:
  int h, w;
  vector<vector<T>> s;

public:
  Imos2d(int h, int w, const vector<Imos2dInterval<T>> &intervals)
      : h(h), w(w) {
    s.resize(h + 1, vector<T>(w + 1, 0));
    for (auto interval : intervals) {
      s[interval.start.y][interval.start.x] += interval.v;
      s[interval.start.y][interval.end.x] -= interval.v;
      s[interval.end.y][interval.start.x] -= interval.v;
      s[interval.end.y][interval.end.x] += interval.v;
    }
    for (int y = 0; y < h; ++y)
      for (int x = 0; x < w; ++x) {
        s[y + 1][x] += s[y][x];
      }
    for (int y = 0; y < h; ++y)
      for (int x = 0; x < w; ++x) {
        s[y][x + 1] += s[y][x];
      }
  }

  // x and y is 0-indexed.
  T get(const Imos2dPoint &p) { return s[p.y][p.x]; }
};
