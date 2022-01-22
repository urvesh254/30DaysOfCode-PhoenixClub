#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> matrix;

  for (int i = 0; i < n; i++) {
    vector<int> row(n);
    for (auto ele: row) cin >> ele;
    reverse(row.begin(), row.end());
    matrix.push_back(row);
  }

  for (auto row: matrix) {
    for (auto ele: row) {
      if (ele == 0) cout << "1 ";
      else cout << "0 ";
    }
    cout << endl;
  }
  return 0;
}
