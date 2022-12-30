#pragma once

#include <bits/stdc++.h>
using namespace std;

struct Eratosthenes {
private:
  int n;
  vector<bool> is_prime;
  vector<int> minfactor;

public:
  Eratosthenes(int n) : n(n), is_prime(n + 1, true), minfactor(n + 1, -1) {
    is_prime[0] = false;
    is_prime[1] = false;
    minfactor[1] = 1;

    for (int i = 2; i <= n; ++i) {
      if (!is_prime[i]) {
        continue;
      }

      minfactor[i] = i;

      for (int j = i * 2; j <= n; j += i) {
        is_prime[j] = false;

        if (minfactor[j] == -1)
          minfactor[j] = i;
      }
    }
  }

  vector<pair<int, int>> factorize(int i) {
    vector<pair<int, int>> res;
    while (i > 1) {
      int p = minfactor[i];
      int exp = 0;

      while (minfactor[i] == p) {
        i /= p;
        ++exp;
      }
      res.emplace_back(i, exp);
    }
    return res;
  }
};
