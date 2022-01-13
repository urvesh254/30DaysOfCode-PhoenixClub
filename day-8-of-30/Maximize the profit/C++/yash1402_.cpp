#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> prices(n);
  for (auto &ele: prices) cin >> ele;
  
  int best = 0, minPrice = prices[0];
  for (int i = 1; i < n; i++) {
    best = max(best, prices[i] - minPrice);
    minPrice = min(minPrice, prices[i]);
  }
  
  cout << best << endl;
  return 0;
}
