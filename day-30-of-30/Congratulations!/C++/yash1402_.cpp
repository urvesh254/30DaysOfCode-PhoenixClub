#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (auto &ele: v) cin >> ele;

  int mxInd = v[0], i = 0;
  while (mxInd >= i && i < n) {
    mxInd = max(mxInd, i + v[i]);
    // cout << "i, mxInd : " << i << ", " << mxInd << endl;
    i++;
  }

  string ans = "false";
  if (i == n) ans = "true";

  cout << ans << endl;

  return 0;
}
