#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalNums, target;
  cin >> totalNums >> target;

  vector<int> numArr(totalNums);
  for (auto &ele: numArr) cin >> ele;

  int start = -1, end = -1;
  for (int i = 0; i < totalNums; i++) {
    if (numArr[i] == target) {
      if (start == -1) start = i;
      end = i;
    }
  }

  cout << start << " " << end << endl;
  return 0;
}
