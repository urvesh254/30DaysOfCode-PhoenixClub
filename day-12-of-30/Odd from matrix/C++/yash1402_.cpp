#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> n >> m;

  int l;
  cin >> l;

  int incRow[n], incCol[m];
  memset(incRow, 0, sizeof(incRow));
  memset(incCol, 0, sizeof(incCol));
  for (int i = 0; i < l; i++) {
    int x, y;
    cin >> x >> y;
    incRow[x]++;
    incCol[y]++;
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((incRow[i] + incCol[j]) % 2 != 0) count++;
    }
  }

  cout << count << endl;
  return 0;
}
