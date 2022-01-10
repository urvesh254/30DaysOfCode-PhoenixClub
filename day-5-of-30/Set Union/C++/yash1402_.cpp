#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
  int n, m;
  cin >> n >> m;
  set<int> s;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  cout << s.size() << endl;
  return 0;
}
