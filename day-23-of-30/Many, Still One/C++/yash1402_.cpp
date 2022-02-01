#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &i: v) cin >> i;

  int oneCount = count(v.begin(), v.end(), 1);

  int prev = -1, consecutiveCounts = 0;
  for (auto i: v) {
    if (prev == 1 && i != 1) {
      break;
    } else if (i == 1) {
      consecutiveCounts++;
    }
    prev = i;
  }
  
  if (consecutiveCounts != oneCount) cout << "false";
  else cout << "true" << endl;
  return 0;
}
