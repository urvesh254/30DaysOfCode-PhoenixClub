#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  if (n == 0) {
    cout << "false" << endl;
    return 0;
  }
  
  int sq = sqrt(n);
  if (sq * sq == n) cout << "true" << endl;
  else cout << "false" << endl;
  
  return 0;
}
