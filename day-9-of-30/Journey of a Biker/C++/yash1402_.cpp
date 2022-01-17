#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> altitudes(n);
  for (auto &ele: altitudes) cin >> ele;
  
  int currentHeight = 0;
  int maxHeight = 0;

  for (auto altitude: altitudes) {
    currentHeight += altitude;
    maxHeight = max(currentHeight, maxHeight);
  }

  cout << maxHeight << endl;
  return 0;
}
