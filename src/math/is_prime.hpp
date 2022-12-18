#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> bool is_prime(T n) {
  for (T i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
