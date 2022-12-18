#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "gcd.hpp"

template <typename T = long long> T lcm(T a, T b) { return a / gcd(a, b) * b; }
