#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i: v) cin >> i;

  unordered_map<int, int> mp;
  for (auto i: v) mp[i]++;

  for (int first = 0; first < n - 1; first++) {
    for (int second = first + 1; second < n; second++) {
      int partialSum = v[first] + v[second];
      int reqNum = 0 - partialSum;

      // how many reqNum are required
      int requiredCount = 1;
      if (v[first] == reqNum) requiredCount++;
      if (v[second] == reqNum) requiredCount++;

      if (mp[reqNum] >= requiredCount) {
        cout << "true" << endl;
        return 0;
      }
    }
  }

  cout << "false" << endl;
  return 0;
}
