#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  
  bool isNegative = n[0] == '-';
  bool hasInserted5 = false;
  for (auto digit: n) {
    if (!hasInserted5 && 
      ((!isNegative && digit - '0' < 5) || (isNegative && digit - '0' > 5)) && 
      digit != '-') {
      cout << 5;
      hasInserted5 = true;
    }
    cout << digit;
  }
  if (!hasInserted5) cout << 5 << endl;
  
  return 0;
}
