#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> altitudes(n);
  for (auto &ele: altitudes) cin >> ele;

  int maxAltitude = 0, peak = 0;
  for (int i = 0; i < n; i++) {
    maxAltitude = max(maxAltitude, altitudes[i]);
    if (maxAltitude == altitudes[i]) peak = i;
  }

  cout << peak << endl;
  return 0;
}
