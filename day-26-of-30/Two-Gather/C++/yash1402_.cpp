#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  if (s1.size() < s2.size()) swap(s1, s2);
  string pre = string(s1.size() - s2.size(), '0');  

  s2 = pre + s2;

  int carry = 0;
  string ans = "";
  for (int i = s1.size() - 1; i >= 0; i--) {
    int sum = carry + (s1[i] - '0') + (s2[i] - '0');
    if (sum > 1) carry = 1;
    else carry = 0;
    
    if (sum % 2 == 0) ans += "0";
    else ans += "1";
  }

  if (carry == 1) ans += "1";
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
