#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  unordered_set<int> squares;
  
  for (auto &ele: arr) {
    cin >> ele;
    squares.insert(ele * ele);
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (squares.find(arr[i] * arr[i] + arr[j] * arr[j]) != squares.end()) {
        cout << "true" << endl;
        return 0;
      }
    }
  }
  
  cout << "false" << endl;
  return 0;
}
