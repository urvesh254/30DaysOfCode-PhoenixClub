#include <bits/stdc++.h>
using namespace std;

struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first * 31 + v.second;
    }
};

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &ele: arr) cin >> ele;

  unordered_map<int, int> occurences;
  for (auto ele: arr) occurences[ele]++;
  
  vector<int> powers;
  for (int i = 0; i <= 31; i++) powers.push_back(1LL << i);

  int count = 0;
  unordered_set<pair<int, int>, pair_hash> seenPairs;
  for (auto num: arr) {
    for (auto power: powers) {
      int reqNumToMakePower = power - num;
      pair<int, int> currentPair = make_pair(min(num, reqNumToMakePower), max(num, reqNumToMakePower));
      if (
        seenPairs.find(currentPair) == seenPairs.end() && 
        occurences.find(reqNumToMakePower) != occurences.end()) {
        if (reqNumToMakePower == num) count += (occurences[num] * occurences[num] - 1) / 2;
        else count += (occurences[num] * occurences[reqNumToMakePower]);
      }
      seenPairs.insert(currentPair);
    }
  }

  cout << count << endl;
  return 0;
}
