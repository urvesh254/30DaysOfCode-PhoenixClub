#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> place(n + 2);
  place[0] = place[n + 1] = 0;
  for (int i = 1; i <= n; i++) cin >> place[i];

  int total = 0;
  for (int i = 1; i <= n; i++) {
    if (place[i] + place[i - 1] + place[i + 1] == 0) {
      place[i] = 1;
      total++;
    }
  }

  int req;
  cin >> req;
  if (req <= total) cout << "true" << endl;
  else cout << "false" << endl;
  
  return 0;
}
