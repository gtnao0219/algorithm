#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> T mod_pow(T a, T n, T mod) {
  T res = 1;
  while (n > 0) {
    if (n & 1) {
      res = res * a % mod;
    }
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}
