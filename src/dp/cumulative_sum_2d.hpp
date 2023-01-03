#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct CumulativeSum2d {
private:
  vector<vector<T>> s;

public:
  CumulativeSum2d(const vector<vector<T>> &grid) {
    int h = grid.size();
    int w = grid[0].size();
    s.resize(h + 1, vector<T>(w + 1, 0));
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + grid[i][j];
      }
    }
  }

  // [x1, x2) [y1, y2), x1 and x2, y1, y2 is 0-indexed.
  T sum(int x1, int y1, int x2, int y2) {
    return s[y2][x2] - s[y1][x2] - s[y2][x1] + s[y1][x1];
  }
};
