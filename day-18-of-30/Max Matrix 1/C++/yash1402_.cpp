#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> maxInRow, maxInCol;
  maxInRow.assign(n, 0);
  maxInCol.assign(n, 0);
  
  vector<vector<int>> matrix;
  matrix.assign(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
      maxInCol[j] = max(maxInCol[j], matrix[i][j]);
      maxInRow[i] = max(maxInRow[i], matrix[i][j]);
    }
  }
  
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == maxInRow[i] && matrix[i][j] == maxInCol[j]) count++;
    }
  }

  cout << count << endl;
  return 0;
}
