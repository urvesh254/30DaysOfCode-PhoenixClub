#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalNums;
  cin >> totalNums;

  vector<int> numArray(totalNums);
  int maxInd, maxNum = numeric_limits<int>::min(), 
      minInd, minNum = numeric_limits<int>::max();
  for (int i = 0; i < totalNums; i++) {
    cin >> numArray[i];
    if (maxNum < numArray[i]) {
      maxNum = numArray[i];
      maxInd = i;
    }
    if (minNum > numArray[i]) {
      minNum = numArray[i];
      minInd = i;
    }
  }

  swap(numArray[totalNums - 1], numArray[maxInd]);
  swap(numArray[0], numArray[minInd]);

  int firstElementCount = count(numArray.begin(), numArray.end(), numArray.front());
  int lastElementCount = count(numArray.begin(), numArray.end(), numArray.back());

  int satisfyingNums = max(0, totalNums - firstElementCount - lastElementCount);
  cout << satisfyingNums  << endl;

  return 0;
}
