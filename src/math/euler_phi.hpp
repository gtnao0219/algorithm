#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./prime_factor.hpp"

template <typename T = long long> T euler_phi(T n) {
  T res = n;
  for (auto &p : prime_factor(n)) {
    res -= res / p.first;
  }
  return res;
}
