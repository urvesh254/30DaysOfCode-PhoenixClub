#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;
  
  int low = 0, high = n - 1;
  int mid;
  int index = -1;
  while (low <= high) {
    mid = (low + high) / 2;
    
    if (arr[mid] == mid) index = mid;

    if (arr[mid] >= mid) high = mid - 1;
    else low = mid + 1;
  }

  cout << index << endl;
  return 0;
}
