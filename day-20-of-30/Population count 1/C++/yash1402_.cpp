#include <bits/stdc++.h>
using namespace std;

#define BASE_YEAR 1950
#define MAX_YEAR 2050
#define MAX_SIZE (MAX_YEAR - BASE_YEAR)

int main() {
  int n;
  cin >> n;

  vector<int> yearPopulation;
  yearPopulation.assign(MAX_SIZE, 0);

  for (int entry = 0; entry < n; entry++) {
    int bornYear, deathYear;
    cin >> bornYear >> deathYear;

    yearPopulation[bornYear - BASE_YEAR]++;
    yearPopulation[deathYear - BASE_YEAR]--;
  }

  for (int year = 1; year < MAX_SIZE; year++) {
    yearPopulation[year] = yearPopulation[year] + yearPopulation[year - 1]; 
  }

  int maxPopulation = yearPopulation[0], maxYear = BASE_YEAR;
  for (int year = 1; year < MAX_SIZE; year++) {
    if (maxPopulation < yearPopulation[year]) {
      maxYear = BASE_YEAR + year;
      maxPopulation = yearPopulation[year];
    }
  }

  cout << maxYear << endl;

  return 0;
}
