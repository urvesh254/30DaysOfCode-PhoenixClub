#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() { 
  int n;
  cin >> n;
  
  vector<int> heights(n);
  for (auto &ele: heights) cin >> ele;
  
  int left = 0, right = n - 1, maxArea = 0;
  while (left <= right) {
    
    int distance = right - left;
    int minTerminal = min(heights[left], heights[right]);
    maxArea = max(maxArea, distance * minTerminal);
    
    if (heights[left] < heights[right]) left++;
    else right--;
  }
  
  cout << maxArea << endl;
  return 0;
}
