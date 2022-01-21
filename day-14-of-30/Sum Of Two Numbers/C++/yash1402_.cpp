#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  
  for (auto &ele: arr) cin >> ele;

  int k;
  cin >> k;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == k) {
        cout << "true" << endl;
        return 0;
      }
    }
  }

  cout << "false" << endl;
  return 0;
}
