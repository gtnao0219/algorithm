---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/mod_int.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\nconstexpr int MOD1 = 1000000007;\nconstexpr int MOD2 = 998244353;\n\
    constexpr int MOD3 = 1000000009;\n\ntemplate <int MOD> struct Mint {\n  long long\
    \ val;\n  constexpr Mint(long long v = 0) noexcept : val(v % MOD) {\n    if (val\
    \ < 0)\n      v += MOD;\n  }\n  constexpr int get_mod() { return MOD; }\n  constexpr\
    \ Mint operator-() const noexcept { return val ? MOD - val : 0; }\n  constexpr\
    \ Mint operator+(const Mint &r) const noexcept {\n    return Mint(*this) += r;\n\
    \  }\n  constexpr Mint operator-(const Mint &r) const noexcept {\n    return Mint(*this)\
    \ -= r;\n  }\n  constexpr Mint operator*(const Mint &r) const noexcept {\n   \
    \ return Mint(*this) *= r;\n  }\n  constexpr Mint &operator+=(const Mint &r) noexcept\
    \ {\n    val += r.val;\n    if (val >= MOD)\n      val -= MOD;\n    return *this;\n\
    \  }\n  constexpr Mint &operator-=(const Mint &r) noexcept {\n    val -= r.val;\n\
    \    if (val < 0)\n      val += MOD;\n    return *this;\n  }\n  constexpr Mint\
    \ &operator*=(const Mint &r) noexcept {\n    val = val * r.val % MOD;\n    return\
    \ *this;\n  }\n  constexpr bool operator==(const Mint &r) const noexcept {\n \
    \   return this->val == r.val;\n  }\n  constexpr bool operator!=(const Mint &r)\
    \ const noexcept {\n    return this->val != r.val;\n  }\n  friend constexpr istream\
    \ &operator>>(istream &is, Mint<MOD> &x) noexcept {\n    is >> x.val;\n    x.val\
    \ %= MOD;\n    if (x.val < 0)\n      x.val += MOD;\n    return is;\n  }\n  friend\
    \ constexpr ostream &operator<<(ostream &os,\n                               \
    \        const Mint<MOD> &x) noexcept {\n    return os << x.val;\n  }\n};\n\n\
    template <typename T> struct ModBinomialCoefficient {\nprivate:\n  vector<T> fact,\
    \ inv, fact_inv;\n\npublic:\n  constexpr ModBinomialCoefficient(int n) noexcept\n\
    \      : fact(n, 1), inv(n, 1), fact_inv(n, 1) {\n    int MOD = fact[0].get_mod();\n\
    \    for (int i = 2; i < n; ++i) {\n      fact[i] = fact[i - 1] * i;\n      inv[i]\
    \ = -inv[MOD % i] * (MOD / i);\n      fact_inv[i] = fact_inv[i - 1] * inv[i];\n\
    \    }\n  }\n\n  constexpr T combination(int n, int k) const noexcept {\n    if\
    \ (n < k || n < 0 || k < 0)\n      return 0;\n    return fact[n] * fact_inv[k]\
    \ * fact_inv[n - k];\n  }\n};\n\nusing Mint1 = Mint<MOD1>;\nusing Mint2 = Mint<MOD2>;\n\
    using Mint3 = Mint<MOD3>;\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\nconstexpr\
    \ int MOD1 = 1000000007;\nconstexpr int MOD2 = 998244353;\nconstexpr int MOD3\
    \ = 1000000009;\n\ntemplate <int MOD> struct Mint {\n  long long val;\n  constexpr\
    \ Mint(long long v = 0) noexcept : val(v % MOD) {\n    if (val < 0)\n      v +=\
    \ MOD;\n  }\n  constexpr int get_mod() { return MOD; }\n  constexpr Mint operator-()\
    \ const noexcept { return val ? MOD - val : 0; }\n  constexpr Mint operator+(const\
    \ Mint &r) const noexcept {\n    return Mint(*this) += r;\n  }\n  constexpr Mint\
    \ operator-(const Mint &r) const noexcept {\n    return Mint(*this) -= r;\n  }\n\
    \  constexpr Mint operator*(const Mint &r) const noexcept {\n    return Mint(*this)\
    \ *= r;\n  }\n  constexpr Mint &operator+=(const Mint &r) noexcept {\n    val\
    \ += r.val;\n    if (val >= MOD)\n      val -= MOD;\n    return *this;\n  }\n\
    \  constexpr Mint &operator-=(const Mint &r) noexcept {\n    val -= r.val;\n \
    \   if (val < 0)\n      val += MOD;\n    return *this;\n  }\n  constexpr Mint\
    \ &operator*=(const Mint &r) noexcept {\n    val = val * r.val % MOD;\n    return\
    \ *this;\n  }\n  constexpr bool operator==(const Mint &r) const noexcept {\n \
    \   return this->val == r.val;\n  }\n  constexpr bool operator!=(const Mint &r)\
    \ const noexcept {\n    return this->val != r.val;\n  }\n  friend constexpr istream\
    \ &operator>>(istream &is, Mint<MOD> &x) noexcept {\n    is >> x.val;\n    x.val\
    \ %= MOD;\n    if (x.val < 0)\n      x.val += MOD;\n    return is;\n  }\n  friend\
    \ constexpr ostream &operator<<(ostream &os,\n                               \
    \        const Mint<MOD> &x) noexcept {\n    return os << x.val;\n  }\n};\n\n\
    template <typename T> struct ModBinomialCoefficient {\nprivate:\n  vector<T> fact,\
    \ inv, fact_inv;\n\npublic:\n  constexpr ModBinomialCoefficient(int n) noexcept\n\
    \      : fact(n, 1), inv(n, 1), fact_inv(n, 1) {\n    int MOD = fact[0].get_mod();\n\
    \    for (int i = 2; i < n; ++i) {\n      fact[i] = fact[i - 1] * i;\n      inv[i]\
    \ = -inv[MOD % i] * (MOD / i);\n      fact_inv[i] = fact_inv[i - 1] * inv[i];\n\
    \    }\n  }\n\n  constexpr T combination(int n, int k) const noexcept {\n    if\
    \ (n < k || n < 0 || k < 0)\n      return 0;\n    return fact[n] * fact_inv[k]\
    \ * fact_inv[n - k];\n  }\n};\n\nusing Mint1 = Mint<MOD1>;\nusing Mint2 = Mint<MOD2>;\n\
    using Mint3 = Mint<MOD3>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/mod_int.hpp
  requiredBy: []
  timestamp: '2023-01-07 13:16:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/math/mod_int.hpp
layout: document
redirect_from:
- /library/src/math/mod_int.hpp
- /library/src/math/mod_int.hpp.html
title: src/math/mod_int.hpp
---
