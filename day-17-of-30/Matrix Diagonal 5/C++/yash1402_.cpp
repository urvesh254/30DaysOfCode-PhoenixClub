#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int sum = 0;
  for (int row = 0, column = n - 1; row < n; row++, column--) {
    sum += arr[row][row];
    sum += arr[row][column];
  }

  if (n % 2 != 0) sum -= arr[n / 2][n / 2];

  cout << sum << endl;
  return 0;
}
