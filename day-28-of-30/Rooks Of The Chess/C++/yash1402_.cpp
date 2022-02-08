#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  long long l;
  cin >> l;
  
  long long prod = 1;
  for (int i = 1; i <= l; i++) prod *= i;
  cout << prod << endl;
  return 0;
}
