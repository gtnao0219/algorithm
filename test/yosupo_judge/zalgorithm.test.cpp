#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/string/z_algorithm.hpp"

int main() {
  string S;
  cin >> S;
  auto res = z_algorithm(S);
  for (int i = 0; i < res.size(); i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << res[i];
  }
  cout << endl;
  return 0;
}
