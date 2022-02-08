#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;
  
  vector<int> maxPossible(n);
  maxPossible[n - 1] = numeric_limits<int>::min();
  
  for (int i = n - 1; i > 0; i--) {
    maxPossible[i - 1] = max(maxPossible[i], arr[i] - i);
  }
  
  int mxAns = numeric_limits<int>::min();
  for (int i = 0; i < n - 1; i++) {
    mxAns = max(mxAns, arr[i] + i + maxPossible[i]);
  }
  
  cout << mxAns << endl;
  return 0;
}
