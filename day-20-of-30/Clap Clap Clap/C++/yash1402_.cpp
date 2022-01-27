#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int num = 1; num <= n; num++) {
    string numString = to_string(num);
    if (
      num % 3 == 0 ||
      numString.find('3') != string::npos ||
      numString.find('6') != string::npos ||
      numString.find('9') != string::npos) {
      cout << "clap ";
    }
    else {
        cout << num << " ";
    }
  }
  cout << endl;
  return 0;
}
