#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> st;
  int n;
  cin >> n;

  unordered_map<int, int> mp;
  vector<int> v, bv;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    bv.push_back(x);
    if (st.find(x) != st.end()) continue;
    st.insert(x);
  }

  int c = st.size() - 1;
  for (auto i: st) mp[i] = c--;

  for (auto i: bv) cout << mp[i] << " ";
  cout << endl;
  return 0;
}