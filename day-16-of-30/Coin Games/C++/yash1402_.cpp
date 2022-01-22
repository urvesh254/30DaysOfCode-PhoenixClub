#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalBoxes;
  cin >> totalBoxes;

  int usedBoxes = 1, count = 0;
  for (int nextHeight = 2; usedBoxes <= totalBoxes; nextHeight++) {
    count++;
    usedBoxes += nextHeight;
  }

  cout << count << endl;
  return 0;
}
