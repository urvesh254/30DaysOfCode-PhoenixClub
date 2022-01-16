#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string nString = to_string(n);

  while(n >= 10) {
    int sum = 0;
    
    for (auto digit: nString) {
      sum += (digit - '0');
    }

    n = sum;
    nString = to_string(n);
  }

  cout << n << endl;
  return 0;
}
