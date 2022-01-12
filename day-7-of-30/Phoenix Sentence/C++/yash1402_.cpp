#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int arr[26] = {0};
  
  for (auto ch: s) {
    arr[ch - 'a']++;
  }
  
  for (int i = 0; i < 26; i++) {
    if (arr[i] == 0) {
      cout << "false" << endl;
      return 0;
    }
  }
  
  cout << "true" << endl;
  return 0;
}
