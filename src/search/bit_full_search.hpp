#pragma once

#include <bits/stdc++.h>
using namespace std;

inline void bit_full_search(int n) {
  for (int bit = 0; bit < (1 << n); ++bit) {
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        // do something
      }
    }
  }
}
