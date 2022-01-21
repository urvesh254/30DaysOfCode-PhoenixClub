#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  unordered_set<int> seen;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (seen.find(x) != seen.end()) {
      cout << x << endl;
      return 0;
    }
    seen.insert(x);
  }
  return 0;
}
