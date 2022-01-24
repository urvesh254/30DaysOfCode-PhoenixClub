#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;

  for (auto ele: arr) cout << ele << " ";
  for (auto ele: arr) cout << ele << " ";
  cout << endl;
  
  return 0;
}
