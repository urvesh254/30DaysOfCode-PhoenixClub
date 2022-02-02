#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &i: v) cin >> i;

  int mi = numeric_limits<int>::max();
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    mi = min(mi, sum);
  }

  if (mi < 0) 
    cout << abs(mi) + 1 << endl;
  else cout << 1 << endl;

  return 0;
}
