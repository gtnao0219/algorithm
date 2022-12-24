#pragma once

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;

#define REP(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) REP(i, 0, n)

template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
  os << p.first << " " << p.second;
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  rep(i, v.size()) { os << v[i] << (i < v.size() - 1 ? " " : ""); }
  return os;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<vector<T>> &v) {
  rep(i, v.size()) {
    rep(j, v[i].size()) { os << v[i][j] << (j < v[j].size() - 1 ? " " : ""); }
    os << endl;
  }
  return os;
}

inline void io_setup(int precision = 15) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(precision);
  cerr << fixed << setprecision(precision);
}
