#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  for (auto &ele: v) cin >> ele;
  
  int l[n], r[n];
  l[0] = v.front();
  r[n - 1] = v.back();
  
  for (int i = 1; i < n; i++) l[i] = l[i - 1] * v[i];
  for (int i = n - 2; i > -1; i--) r[i] = r[i + 1] * v[i];
  
  for (int i = 0; i < n; i++) {
    int lind = i - 1;
    int rind = i + 1;
    if (lind < 0) cout << r[rind] << " ";
    else if (rind >= n) cout << l[lind] << " ";
    else cout << r[rind] * l[lind] << " ";
  }
  cout << endl;
  
  return 0;
}
