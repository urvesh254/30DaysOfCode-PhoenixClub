#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n), ans(n);

  for (auto &ele: arr) cin >> ele;

  for (int i = 0; i < n; i++) {
    ans[i] = arr[arr[i]];
  }

  for (auto ele: arr) cout << ele << " ";
  cout << endl;
  return 0;
}
