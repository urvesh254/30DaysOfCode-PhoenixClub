#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> values(n), index(x);
  for (auto &ele: values) cin >> ele;
  for (auto &ele: index) cin >> ele;
  
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (ans.size() <= index[i]) ans.push_back(values[i]);
    else ans.insert(ans.begin() + index[i], values[i]);
  }
  
  for (auto ele: ans) cout << ele << " ";
  cout << endl;
  return 0;
}
