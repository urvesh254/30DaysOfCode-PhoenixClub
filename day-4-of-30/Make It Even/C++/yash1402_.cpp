#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string num;
  int count = 0;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num.size() % 2 == 0) count++;
  }

  cout << count << endl;
  return 0;
}
