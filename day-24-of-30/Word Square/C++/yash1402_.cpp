#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> stringArr(n);
  for (auto &i: stringArr) cin >> i;

  int maxStringSize = 0;
  for (auto i:stringArr) maxStringSize = max((int)i.size(), maxStringSize);

  maxStringSize = max(n, maxStringSize);

  for (int i = 0; i < n; i++) {
    bool doesMatch = true;
    for (int j = 0; j < stringArr[i].size(); j++) {
      if (j >= n || i >= stringArr[j].size() || stringArr[i][j] != stringArr[j][i]) {
        doesMatch = false;
        break;
      }
    }
    if (!doesMatch) {
      cout << "false" << endl;
      return 0;
    }
  }

  cout << "true" << endl;
  return 0;
}
