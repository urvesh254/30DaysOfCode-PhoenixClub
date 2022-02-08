#include <bits/stdc++.h>
using namespace std;

int main() {
  char target;
  cin >> target;
  
  int n;
  cin >> n;
  string word;
  cin >> word;

  char mx = target;
  for (auto ch: word) {
    if (target < ch) {
      mx = ch;
      break;
    }
  }
  if (mx == target) mx = word[0];

  cout << mx << endl;
  return 0;
}
