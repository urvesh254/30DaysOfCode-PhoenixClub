#include <bits/stdc++.h>
using namespace std;

int main() {
  string rawString;
  cin >> rawString;

  unordered_map<char, int> rawStringMap;
  for (auto i: rawString) rawStringMap[i]++;

  int n;
  cin >> n;

  vector<string> toBeMadeStrings(n);
  for (auto &i: toBeMadeStrings) cin >> i;

  unordered_map<char, int> targetMap;
  
  int maxPossible = 0;
  for (auto target: toBeMadeStrings) {
    targetMap.clear();
    for (auto i: target) targetMap[i]++;
    
    bool cant = false;
    for (auto character: targetMap) {
      if (
        rawStringMap.find(character.first) == rawStringMap.end() || 
        rawStringMap[character.first] < character.second) {
        cant = true;
        break;
      }
    }
    if (!cant) maxPossible = max(maxPossible, int(target.size()));
  }
  cout << maxPossible << endl;
  return 0;
}
