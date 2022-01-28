#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;
  
  /**
  * Equation is in form of : 7 * x + 3 * y = n
  * Can be solved as : x = (n - 3 * y) / 7
  */
  int y = 0;
  while (true) {
    int numerator = n - 3 * y;
    if (numerator < 0) break;
    else if (numerator % 7 == 0) {
      cout << "true" << endl;
      return 0;
    }
    y++;
  }
  cout << "false" << endl;
  return 0;
}
