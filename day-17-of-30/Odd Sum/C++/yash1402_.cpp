#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int last = n * 2 - 1;
  cout << n * (1 + last) / 2 << endl;
  return 0;
}
