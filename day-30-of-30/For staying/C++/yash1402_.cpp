#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalNums;
  cin >> totalNums;

  unordered_set<int> alreadySeen;
  int x;
  for (int i = 0; i < totalNums; i++) {
    cin >> x;
    
    if (alreadySeen.find(x * 2) != alreadySeen.end() || 
        (x % 2 == 0 && alreadySeen.find(x / 2) != alreadySeen.end())) {
      cout << "true" << endl;
      return 0;
    }
    alreadySeen.insert(x);
  }
  
  cout << "false" << endl;
  return 0;
}
