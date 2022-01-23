#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;

  int target;
  cin >> target;

  auto findMe = lower_bound(arr.begin(), arr.end(), target);
  cout << distance(arr.begin(), findMe) << endl;
  return 0;
}
