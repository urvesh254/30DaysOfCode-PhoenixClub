#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int count = 0, x;
  for (int i = 0; i < n * n; i++) {
    cin >> x;
    if (x < 0) count++;
  }

  cout << count << endl;
  return 0;
}