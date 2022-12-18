#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = long long> T gcd(T a, T b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
