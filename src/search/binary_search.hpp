#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> T bin_search(T ng, T ok, function<bool(T)> is_ok) {
  while (abs(ok - ng) > 1) {
    T mid = (ok + ng) / 2;

    if (is_ok(mid)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  return ok;
}
