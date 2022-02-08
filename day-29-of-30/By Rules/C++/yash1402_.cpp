#include <bits/stdc++.h>
using namespace std;

int main() {
  string ruleKey, ruleValue;
  cin >> ruleKey >> ruleValue;

  int totalItems, matchingItems = 0;
  cin >> totalItems;

  string name, color, type;
  for (int i = 0; i < totalItems; i++) {
    cin >> type >> color >> name;

    if (ruleKey == "type" && type == ruleValue) matchingItems++;
    else if (ruleKey == "color" && color == ruleValue) matchingItems++;
    else if (ruleKey == "name" && name == ruleValue) matchingItems++; 
  }

  cout << matchingItems << endl;
  return 0;
}
