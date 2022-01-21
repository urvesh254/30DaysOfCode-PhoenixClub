#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n;
  cin >> n;
  int x[n], y[n];
  
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  
  for (int i = 0; i < n; i++) {
    cin >> y[i];
  }
  
  for (int i = 0; i < n; i++) {
    cout << x[i] << " " << y[i] << " ";
  }
  cout << endl;
  return 0;
}
