#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() { 
  int n;
  cin >> n;
  int ele;
  vector<int> rowSum, colSum;
  rowSum.assign(n, 0);
  colSum.assign(n, 0);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> ele;
      rowSum[i] += ele;
      colSum[j] += ele;
    }
  }
  
  int reqSum = n * (n + 1) / 2;
  string ans = "true";
  for (int i = 0; i < n; i++) {
    if (rowSum[i] != reqSum || colSum[i] != reqSum) {
      ans = "false";
      break;
    }
  }
  
  cout << ans << endl;
  return 0;
}
