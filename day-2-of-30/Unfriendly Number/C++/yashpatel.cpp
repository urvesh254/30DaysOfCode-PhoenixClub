#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
  string num;
  set<int> s;

  cin >> num;
  for (auto digit: num) {
    if (s.find(digit) != s.end()) {
      // digit is already in the set
      cout << "The number is unlucky." << endl;
      return 0;
    }
    s.insert(digit);
  }

  cout << "The number is lucky." << endl;
  return 0;
}