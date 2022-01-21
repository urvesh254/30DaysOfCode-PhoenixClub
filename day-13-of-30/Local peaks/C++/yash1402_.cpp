#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> heights(n);
  for (auto &ele: heights) cin >> ele;

  vector<int> localPeaks;
  
  for (int i = 0; i < n; i++) {
    if (i == 0 && heights[i] > heights[i + 1]) localPeaks.push_back(i);
    else if (i == n - 1 && heights[i] > heights[i - 1]) localPeaks.push_back(i);
    else if (heights[i] > heights[i - 1] && heights[i] > heights[i + 1]) localPeaks.push_back(i);
  }

  for (auto peak: localPeaks) cout << peak << " ";
  cout << endl;
  return 0;
}
