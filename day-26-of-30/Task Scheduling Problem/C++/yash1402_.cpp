#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  
  unordered_map<int, int> mp;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  int time = 0;
  for (int i = 0; i < n;) {
    int task = v[i];
    int inc = 1;
    if (mp.find(task) != mp.end() && mp[task] >= 0) {
      inc += mp[task];
    }
    
    time += inc;
    for (auto i: mp) {
      mp[i.first] -= inc;
    }
    
    if (mp.find(task) == mp.end() || mp[task] < 0) {
      mp[task] = k;
      i++;
    }
  }
  cout << time << endl;
  return 0;
}
