#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalCars, totalBudget;
  cin >> totalCars >> totalBudget;

  vector<int> carsPrice(totalCars);
  for (auto &ele: carsPrice) cin >> ele;

  sort(carsPrice.begin(), carsPrice.end());

  int moneySpent = 0;
  int carsBuyed = 0;
  
  for (int i = 0; i < totalCars; i++) {
    moneySpent += carsPrice[i];
    if (moneySpent <= totalBudget) carsBuyed++;
    else break;
  }

  cout << carsBuyed << endl;
  return 0;
}
