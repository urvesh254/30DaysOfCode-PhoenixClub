#include <bits/stdc++.h>
using namespace std;

int main() {
  int toBeFoundFactorial;
  cin >> toBeFoundFactorial;

  int currentFactorial = 1;
  for (int num = 1; currentFactorial <= toBeFoundFactorial; num++) {
    currentFactorial *= num;
    
    if (currentFactorial == toBeFoundFactorial) {
      cout << num << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
