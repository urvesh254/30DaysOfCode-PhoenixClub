#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &ele: v) cin >> ele;

  sort(v.begin(), v.end());

  string ans = v[n - 1] > v[n - 2] * 2 ? "true" : "false";

  cout << ans << endl;
  return 0;
}
