#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_set<int> positiveSet, negativeSet;

  for (int i = 0; i < n; i++) {
    int ele;
    cin >> ele;
    if ( ele < 0) negativeSet.insert(ele);
    else if (ele == 0) {
      negativeSet.insert(0);
      positiveSet.insert(0);
    }
    else positiveSet.insert(ele);
  }
  

  int ans = -1;
  for (auto ele: positiveSet) {
    if (negativeSet.find(-ele) != negativeSet.end()) {
      ans = max(ele, ans);
    }
  }

  cout << ans << endl;
  return 0;
}
