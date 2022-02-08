#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalRows, totalColumns, kthSmallest;
  cin >> totalRows >> totalColumns >> kthSmallest;

  vector<int> flatMatrix(totalRows * totalColumns);
  for (auto &ele: flatMatrix) cin >> ele;

  sort(flatMatrix.begin(), flatMatrix.end());

  cout << flatMatrix[kthSmallest] << endl;
  
  return 0;
}
