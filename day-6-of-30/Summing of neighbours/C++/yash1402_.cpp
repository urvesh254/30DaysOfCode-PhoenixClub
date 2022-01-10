#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) cin >> arr[i];

  int bestSum = 0, currentSum = 0;
  for (int i = 0; i < k; i++) currentSum += arr[i];

  for (int i = k; i < n; i++) {
    currentSum -= arr[i - k];
    currentSum += arr[i];
    bestSum = max(currentSum, bestSum);
  }

  cout << bestSum << endl;

  return 0;
}