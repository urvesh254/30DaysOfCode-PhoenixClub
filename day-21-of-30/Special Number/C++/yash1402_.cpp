#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int arr[n][m];
  vector<int> row, col;
  row.assign(n, 10000);
  col.assign(m, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      row[i] = min(row[i], arr[i][j]);
      col[j] = max(col[j], arr[i][j]);
    }
  }


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == row[i] && arr[i][j] == col[j])
        cout << arr[i][j] << " ";
    }
  }
  cout << endl;
  return 0;
}
