#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  bool is = true;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      is = false;
      break;
    }
  }
  return is;
}

int main() {
  int n;
  cin >> n;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      // cout << "isPrime(" << i << ") = " << isPrime(i) << endl;
      if ((isPrime(i) && i > 5) || (isPrime(n / i) && n / i > 5)) {
        // cout << "prime : " << i << " or " << n / i << endl;
        cout << "false" << endl;
        return 0;
      }
    }
  }

  cout << "true" << endl;
  return 0;
}