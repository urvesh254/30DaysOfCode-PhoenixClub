#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n, t;
  cin >> n >> t;
  
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x == t) {
      cout << i << endl;
      return 0;
    }
  }
  
  cout << -1 << endl;
  return 0;
}
