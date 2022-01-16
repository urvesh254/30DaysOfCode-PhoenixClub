#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;

  for (auto ele: arr) {
    int eleCount = count(arr.begin(), arr.end(), ele);
    if (eleCount == ele) {
      cout << "true" << endl;
      return 0;
    }
  }

  cout << "false" << endl;
  return 0;
}
