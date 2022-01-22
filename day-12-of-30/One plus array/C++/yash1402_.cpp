#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> digits(n);
  for (auto &ele: digits) cin >> ele;

  int carry = 0;
  digits.back() = digits.back() + 1;
  if (digits.back() >= 10) {
    digits.back() = 0;
    carry = 1;
  }

  for (int i = n - 1; i >= 0 && carry != 0; i--) {
    int sum = digits[i] + carry;
    if (sum >= 10) {
      digits[i] = 0;
    } else {
      digits[i] = sum;
      carry = 0;
    }
  }

  if (carry == 1) cout << carry << " ";
  for (auto digit: digits) cout << digit << " ";
  cout << endl;
  return 0;
}
