#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for (long long power = 0; power <= 62; power++) {
    if (1LL << power == n) {
      cout << "true" << endl;
      return 0;
    }
  }
  
  cout << "false" << endl;
  return 0;
}
