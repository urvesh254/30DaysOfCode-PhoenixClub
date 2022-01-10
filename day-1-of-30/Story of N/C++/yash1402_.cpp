#include <iostream>
using namespace std;

int sumOfDigits(int x) {
  string s = to_string(x);
  int sum = 0;
  for (auto ch: s) {
    sum += (ch - '0');
  }
  return sum;
}

int main() {
  int n;
  cin >> n;

  int currentNumber = 1;
  while (true) {
    if (sumOfDigits(currentNumber) == 11) {
      n--;
      if (n == 0) break;
    }
    currentNumber++;
  }

  cout << currentNumber << endl;
}