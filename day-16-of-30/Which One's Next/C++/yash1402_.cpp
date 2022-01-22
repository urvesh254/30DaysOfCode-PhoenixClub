#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<int, int> occurrences;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    occurrences[x]++;
  }
  
  int count = 0;
  for (auto ele: occurrences) {
    if (occurrences.find(ele.first + 1) != occurrences.end()) {
      count += ele.second;
    }
  }

  cout << count << endl;
  return 0;
}
