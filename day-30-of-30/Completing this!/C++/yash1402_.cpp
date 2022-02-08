#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  for (auto &ele: v) cin >> ele;

  for (int i = 2; i < n; i++) {
    v[i] = max(v[i] + v[i - 2], v[i - 1]);
  }

  cout << v[n - 1] << endl;
  return 0;
}
