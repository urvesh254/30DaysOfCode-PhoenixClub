#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int sumOfDigits = 0, productOfDigits = 1;
  for (int i = 0; i < s.size(); i++) {
    int digit = s[i] - '0';
    sumOfDigits += digit;
    productOfDigits *= digit;
  }

  cout << abs(productOfDigits - sumOfDigits) << endl;
}