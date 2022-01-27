#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_set<string> delivered, pickedUp;

  for (int i = 0; i < n; i++) {
    string activity;
    cin >> activity;
    
    string id = activity.substr(1, activity.size() - 1);
    
    if (activity[0] == 'D') {
      if (
        delivered.find(id) != delivered.end() || 
        pickedUp.find(id) == pickedUp.end()) {
        /* duplicate delivery entry OR pickUp for this delivery not found */
        cout << "false" << endl;
        return 0;
      }
      delivered.insert(id);
    } else {
      if (pickedUp.find(id) != pickedUp.end()) {
        /* duplicate pickUp entry */
        cout << "false" << endl;
        return 0;
      }
      pickedUp.insert(id);
    }
  }

  if (pickedUp.size() != delivered.size()) {
    /* Not all pickUp are delivered */
    cout << "false" << endl;
    return 0;
  }

  cout << "true" << endl;
  return 0;
}
