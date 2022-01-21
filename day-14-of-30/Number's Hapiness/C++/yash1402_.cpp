#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  unordered_set<int> seen;
  while (n != "1") {
    int nn = 0;
    for (auto ch: n) {
      int dig = ch - '0';
      nn += (dig * dig);
    }
    
    n = to_string(nn);
    if (seen.find(nn) != seen.end()) {
      cout << "false" << endl;
      return 0;
    }
    
    seen.insert(nn);
  }

  cout << "true" << endl;
  return 0;
}
