#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int hours, minutes;
  cin >> hours >> minutes;
  hours %= 12;
  
  double deg = abs((minutes - ((double)minutes / 12 + (hours % 5) * 5)) * 6);
  
  if (deg > 180) deg = 360 - deg;
  
  cout << int(deg) << endl;
  return 0;
}
