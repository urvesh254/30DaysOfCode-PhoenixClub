#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<int, int> mp;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  unordered_set<int> st;
  for (auto i: mp) {
    if (st.find(i.second) != st.end()) {
      cout << "false" << endl;
      return 0;
    }
    st.insert(i.second);
  }

  cout << "true" << endl;
  return 0;
}