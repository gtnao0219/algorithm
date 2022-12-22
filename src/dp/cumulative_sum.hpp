#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct CumulativeSum {
private:
  vector<T> s;

public:
  CumulativeSum(const vector<T> &nums) {
    int n = nums.size();
    s.resize(n + 1, 0);
    for (int i = 0; i < n; ++i) {
      s[i + 1] = s[i] + nums[i];
    }
  }

  // [l, r), l and r is 0-indexed.
  T sum(int l, int r) { return s[r] - s[l]; }
};
