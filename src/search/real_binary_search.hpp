#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T>
T real_bin_search(T ng, T ok, function<bool(T)> is_ok, int loop = 100) {
  for (int i = 0; i < loop; i++) {
    T mid = (ok + ng) / 2;

    if (is_ok(mid)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  return ok;
}
