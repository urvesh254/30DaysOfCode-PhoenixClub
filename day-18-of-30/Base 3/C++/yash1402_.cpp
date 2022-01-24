#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;

  while (n > 0) {
    v.push_back(n % 3);
    n /= 3;
  }
  reverse(v.begin(), v.end());
  
  for (auto ele: v) cout << ele;
  
  return 0;
}
