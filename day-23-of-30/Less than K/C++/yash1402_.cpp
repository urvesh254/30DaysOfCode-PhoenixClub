#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  vector<int> v(n);
  for (auto &i: v) cin >> i;

  int i = 0, sum = v[0];
  for (; i < n && sum <= k; i++) {
    sum += v[i + 1];
  }

  cout << i - 1 << endl;
  return 0;
}
