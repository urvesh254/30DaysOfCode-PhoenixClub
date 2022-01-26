#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {   
  string n;
  cin >> n;
  
  int answer = 0;
  for (int i = n.size() - 1; i >= 0; i--) {
    int digit = n[i] - '0';
    int currPower = n.size() - i - 1;
    answer += (digit * pow(3, currPower));
  }

  cout << answer << endl;
  return 0;
}
