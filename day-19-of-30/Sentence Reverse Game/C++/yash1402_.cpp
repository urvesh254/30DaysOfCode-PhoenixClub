#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {      
  vector<string> words;
  
  string word;
  while (cin >> word) { words.push_back(word); }
  
  for (auto iter = words.rbegin(); iter <= words.rend(); iter++) cout << *iter << " ";
  cout << endl;
  return 0;
}
