#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/diameter.hpp"
#include "../../src/graph/template.hpp"

int main() {
  int n;
  cin >> n;
  Diameter<int> diameter(n);
  for (int i = 0; i < n - 1; i++) {
    int s, t, w;
    cin >> s >> t >> w;
    diameter.add_edge(s, t, w);
  }
  cout << diameter.calc() << endl;
  return 0;
}
