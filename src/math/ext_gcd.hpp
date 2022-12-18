#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> T ext_gcd(T a, T b, T &x, T &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  long long d = ext_gcd(b, a % b, y, x);
  y -= a / b * x;
  return d;
}
