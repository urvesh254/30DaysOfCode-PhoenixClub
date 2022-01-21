#include <bits/stdc++.h>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n, m;
  cin >> n >> m;
  
  int maxAmount = 0;
  
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      sum += x;
    }
    
    maxAmount = max(sum, maxAmount);
  }
  
  cout << maxAmount << endl;
  return 0;
}
