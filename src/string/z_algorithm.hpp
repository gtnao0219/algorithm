#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int> vector<T> z_algorithm(string s) {
  int n = s.size();
  vector<T> res(n, 0);
  res[0] = n;
  int i = 1, j = 0;
  while (i < n) {
    while (i + j < n && s[j] == s[i + j]) {
      ++j;
    }
    res[i] = j;
    if (j == 0) {
      ++i;
      continue;
    }
    int k = 1;
    while (i + k < n && k + res[k] < j) {
      res[i + k] = res[k];
      ++k;
    }
    i += k;
    j -= k;
  }
  return res;
}
