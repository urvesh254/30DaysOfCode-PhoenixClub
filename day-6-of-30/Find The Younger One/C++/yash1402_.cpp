#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n), sortedNums(n);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums[i] = sortedNums[i] = x;
  }

  sort(sortedNums.begin(), sortedNums.end());

  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = distance(
      sortedNums.begin(),
      upper_bound(sortedNums.begin(), sortedNums.end(), nums[i] - 1)
    );
  }

  for (int i = 0; i < n; i++) cout << ans[i] << " ";
  return 0;
}
