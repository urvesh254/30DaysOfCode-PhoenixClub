#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  int requiredCountsForSpecialNum = n / k;

  for (int i = 0; i < n; i++) cin >> arr[i];

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int currentElement = arr[i], currentElementCount = 0;
    if (currentElement == -1) continue;

    for (int j = 0; j < n; j++) {
      if (arr[j] == currentElement) {
        currentElementCount++;
        arr[j] = -1; // since this element is counted, update it with -1, so it will never be counted again
      }
    }
    if (currentElementCount == requiredCountsForSpecialNum) answer++;
  }

  cout << answer << endl;
  return 0;
}