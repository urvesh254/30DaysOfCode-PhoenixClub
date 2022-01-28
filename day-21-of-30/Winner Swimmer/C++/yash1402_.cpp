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
  vector<int> v(n);
  
  for (auto &ele: v) cin >> ele;
  
  sort(v.begin(), v.end());
  
  vector<int> bestPossible(v);
  for (int i = n; i > 0; i--) bestPossible[n - i] += i;
  
  int mxPoints = *max_element(bestPossible.begin(), bestPossible.end());
  
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] + n >= mxPoints) count++;
  }
  
  cout << count << endl;
  return 0;
}
