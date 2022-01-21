#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> elements(n);
  for (auto &ele: elements) cin >> ele;

  int target;
  cin >> target;
  
  for (int i = 0; i < n; i++) {
    if (target <= elements[i]) {
      cout << elements[i] << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
