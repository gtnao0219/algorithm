#pragma once

#include <bits/stdc++.h>
using namespace std;

constexpr int MOD1 = 1000000007;
constexpr int MOD2 = 998244353;
constexpr int MOD3 = 1000000009;

template <int MOD> struct Mint {
  long long val;
  constexpr Mint(long long v = 0) noexcept : val(v % MOD) {
    if (val < 0)
      v += MOD;
  }
  constexpr int get_mod() { return MOD; }
  constexpr Mint operator-() const noexcept { return val ? MOD - val : 0; }
  constexpr Mint operator+(const Mint &r) const noexcept {
    return Mint(*this) += r;
  }
  constexpr Mint operator-(const Mint &r) const noexcept {
    return Mint(*this) -= r;
  }
  constexpr Mint operator*(const Mint &r) const noexcept {
    return Mint(*this) *= r;
  }
  constexpr Mint &operator+=(const Mint &r) noexcept {
    val += r.val;
    if (val >= MOD)
      val -= MOD;
    return *this;
  }
  constexpr Mint &operator-=(const Mint &r) noexcept {
    val -= r.val;
    if (val < 0)
      val += MOD;
    return *this;
  }
  constexpr Mint &operator*=(const Mint &r) noexcept {
    val = val * r.val % MOD;
    return *this;
  }
  constexpr bool operator==(const Mint &r) const noexcept {
    return this->val == r.val;
  }
  constexpr bool operator!=(const Mint &r) const noexcept {
    return this->val != r.val;
  }
  friend constexpr istream &operator>>(istream &is, Mint<MOD> &x) noexcept {
    is >> x.val;
    x.val %= MOD;
    if (x.val < 0)
      x.val += MOD;
    return is;
  }
  friend constexpr ostream &operator<<(ostream &os,
                                       const Mint<MOD> &x) noexcept {
    return os << x.val;
  }
};

template <typename T> struct ModBinomialCoefficient {
private:
  vector<T> fact, inv, fact_inv;

public:
  constexpr ModBinomialCoefficient(int n) noexcept
      : fact(n, 1), inv(n, 1), fact_inv(n, 1) {
    int MOD = fact[0].get_mod();
    for (int i = 2; i < n; ++i) {
      fact[i] = fact[i - 1] * i;
      inv[i] = -inv[MOD % i] * (MOD / i);
      fact_inv[i] = fact_inv[i - 1] * inv[i];
    }
  }

  constexpr T combination(int n, int k) const noexcept {
    if (n < k || n < 0 || k < 0)
      return 0;
    return fact[n] * fact_inv[k] * fact_inv[n - k];
  }
};

using Mint1 = Mint<MOD1>;
using Mint2 = Mint<MOD2>;
using Mint3 = Mint<MOD3>;
