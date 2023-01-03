#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0560"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/dp/cumulative_sum_2d.hpp"

int main() {
  int M, N, K;
  cin >> M >> N >> K;
  vector<vector<long long>> jgrid(M, vector<long long>(N, 0));
  vector<vector<long long>> ogrid(M, vector<long long>(N, 0));
  vector<vector<long long>> igrid(M, vector<long long>(N, 0));
  for (int i = 0; i < M; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < N; ++j) {
      if (s[j] == 'J') {
        jgrid[i][j] = 1;
      } else if (s[j] == 'O') {
        ogrid[i][j] = 1;
      } else {
        igrid[i][j] = 1;
      }
    }
  }
  CumulativeSum2d<long long> jcum(jgrid);
  CumulativeSum2d<long long> ocum(ogrid);
  CumulativeSum2d<long long> icum(igrid);
  for (int i = 0; i < K; ++i) {
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;
    --y1;
    --x1;
    cout << jcum.sum(x1, y1, x2, y2) << " " << ocum.sum(x1, y1, x2, y2) << " "
         << icum.sum(x1, y1, x2, y2) << endl;
  }
}
