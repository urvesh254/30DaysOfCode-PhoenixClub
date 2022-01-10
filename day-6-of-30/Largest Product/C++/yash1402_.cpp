#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  sort(arr.begin(), arr.end());
  int firstTwo = arr[0] * arr[1];
  int lastTwo = arr[n - 1] * arr[n - 2];
  cout << max(firstTwo, lastTwo) << endl;
  return 0;
}