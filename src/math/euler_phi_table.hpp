#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int> vector<T> euler_phi_table(T n) {
  vector<T> res(n + 1);
  for (T i = 0; i <= n; ++i) {
    res[i] = i;
  }
  for (T i = 2; i <= n; ++i) {
    if (res[i] == i) {
      for (T j = i; j <= n; j += i) {
        res[j] -= res[j] / i;
      }
    }
  }
  return res;
}
