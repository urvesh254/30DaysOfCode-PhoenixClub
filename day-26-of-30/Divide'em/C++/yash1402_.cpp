#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <iterator>

using namespace std;

unordered_set<int> getFactors(int n) {
  unordered_set<int> factors;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      factors.insert(i);
      factors.insert(n / i);
    }
  }
  return factors;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  
  for (auto &ele: v) cin >> ele;
  
  auto globalFactors = getFactors(v[0]);
  for (auto num: v) {
    auto numFactors = getFactors(num);
    
    unordered_set<int> intersectionSet;
    if (globalFactors.size() <= numFactors.size()) {
      for (auto factor: globalFactors) {
        if (numFactors.find(factor) != numFactors.end()) {
          intersectionSet.insert(factor);
        }
      }
    }
    else {
      for (auto factor: numFactors) {
        if (globalFactors.find(factor) != globalFactors.end()) {
          intersectionSet.insert(factor);
        }
      }
    }
    
    globalFactors = intersectionSet;
    if (globalFactors.size() == 1) {
      for (auto i: globalFactors) {
        if (i == 1) break;
      }
    }
  }
  
  int mx = 1;
  for (auto factor: globalFactors) mx = max(mx, factor);
  cout << mx << endl;
  return 0;
}
