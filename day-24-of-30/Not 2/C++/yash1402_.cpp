#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x;
  cin >> x;
  
  int acc = x;
  for (int i = 1; i < n; i++) {
    cin >> x;
    acc ^= x;
  }
  cout << acc << endl;
  return 0;
}
