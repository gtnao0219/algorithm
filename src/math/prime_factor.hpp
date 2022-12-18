#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> map<T, T> prime_factor(T n) {
  map<T, T> res;
  for (T i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      ++res[i];
      n /= i;
    }
  }
  if (n != 1) {
    res[n] = 1;
  }
  return res;
}
