#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (auto &ele: v) cin >> ele;

  int sum = 0;
  for (int i = 0; i < n; i++) sum += v[i];

  for (int i = 0; i < n; i++) {
    sum -= v[i];
    if (sum / (n - 1) == k) {
      cout << "true" << endl;
      return 0;
    }
    sum += v[i];
  }

  cout << "false" << endl;
  return 0;
}
