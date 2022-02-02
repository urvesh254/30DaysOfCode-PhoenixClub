#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  // for (int i = 0; i < n; i++) {
  //   int cc = arr[i][0];
  //   for (int ii = i, jj = 0; ii < n && jj < m; ii++, jj++) {
  //     if (cc != arr[ii][jj]) {
  //       cout << "false" << endl;
  //       return 0;
  //     }
  //   }
  // }
  
  // for (int j = 0; j < m; j++) {
  //   int cc = arr[0][j];
  //   for (int ii = 0, jj = j; ii < n && jj < m; ii++, jj++) {
  //     if (cc != arr[ii][jj]) {
  //       cout << "false" << endl;
  //       return 0;
  //     }
  //   }
  // }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (arr[i - 1][j - 1] != arr[i][j]) {
        cout << "false" << endl;
        return 0;
      }
    }
  }

  cout << "true" << endl;
  return 0;
}
