#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int n;
  cin >> n;
  int nn = n * n;
  if (nn % 10 == n % 10) {
    cout << "Phoenix number" << endl;
  }
  else {
    cout << "Not a phoenix number." << endl;
  }
    return 0;
}
