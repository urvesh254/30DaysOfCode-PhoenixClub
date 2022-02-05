#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows, columns;
  cin >> rows >> columns;

  int arr[rows][columns];
  unordered_set<int> zeroRows, zeroColumns;
  
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 0) {
        zeroRows.insert(i);
        zeroColumns.insert(j);
      } 
    }
  }

  for (auto zeroRowInd: zeroRows) {
    for (int j = 0; j < columns; j++) {
      arr[zeroRowInd][j] = 0;
    }
  }

  for (auto zeroColInd: zeroColumns) {
    for (int i = 0; i < rows; i++) {
      arr[i][zeroColInd] = 0;
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
