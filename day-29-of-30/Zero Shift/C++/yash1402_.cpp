#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalNums;
  cin >> totalNums;

  vector<int> numArray(totalNums);
  for (auto &ele: numArray) cin >> ele;

  int nonZeroInd = 0, zeroInd = 0;

  while (nonZeroInd < totalNums && zeroInd < totalNums) {
    while (nonZeroInd < totalNums && numArray[nonZeroInd] == 0) 
      nonZeroInd++;
    
    while (zeroInd < totalNums && numArray[zeroInd] != 0) 
      zeroInd++;

    if (zeroInd < totalNums && nonZeroInd < totalNums && zeroInd < nonZeroInd) {
      swap(numArray[zeroInd], numArray[nonZeroInd]);
    }
    else {
      nonZeroInd++;
    }
  }

  for (auto ele: numArray) cout << ele << " ";
  cout << endl;
  return 0;
}
