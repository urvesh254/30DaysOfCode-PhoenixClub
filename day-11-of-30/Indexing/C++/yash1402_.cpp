#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;

  int rSum = accumulate(arr.begin() + 2, arr.end(), 0);
  int lSum = arr[0];
  for (int i = 1; i < n; i++) {
    if (lSum == rSum) {
      cout << i << endl;
      return 0;
    }
    lSum += arr[i];
    rSum -= arr[i + 1];
  }

  cout << -1 << endl;
  return 0;
}
