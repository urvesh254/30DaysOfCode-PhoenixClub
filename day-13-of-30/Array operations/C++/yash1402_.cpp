#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string numberString, x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    numberString += x;
  }

  int k;
  cin >> k;

  int number = stoi(numberString);
  number += k;
  
  numberString = to_string(number);
  for (auto i: numberString) cout << i << " ";
  cout << endl;
  return 0;
}
