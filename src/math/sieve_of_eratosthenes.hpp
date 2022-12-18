#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int> vector<T> sieve_of_eratosthenes(T n) {
  vector<bool> is_prime(n + 1, true);
  vector<T> res;
  is_prime[0] = false;
  is_prime[1] = false;
  for (T i = 2; i <= n; ++i) {
    if (is_prime[i]) {
      res.push_back(i);
      for (int j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  return res;
}
