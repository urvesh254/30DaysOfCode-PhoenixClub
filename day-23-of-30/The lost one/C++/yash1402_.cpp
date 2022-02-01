#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_set<int> occurences;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    occurences.insert(x);
  }

  for (int num = 1; num <= n; num++) {
    if (occurences.find(num) == occurences.end()) {
      cout << num << endl;
      return 0;
    }
  }
  
  return 0;
}
