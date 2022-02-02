#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }

  int i = 1;
  while (true) {
    if (st.find(i) == st.end()) {
      cout << i << endl;
      return 0;
    }
    i++;
  }
  return 0;
}