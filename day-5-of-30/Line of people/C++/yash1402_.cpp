#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n, a ,b;
  cin >> n >> a >> b;
  b = n - b - 1;
  cout << n - max(a, b) << endl;
  return 0;
}