#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  for (auto &i: v) cin >> i;

  unordered_map<int, int> mp;
  for (auto ele: v) mp[ele]++;

  for (auto ele: v) {
    if (mp[ele] == 1) cout << ele << " ";
  }

  cout <<  endl;
  return 0;
}
