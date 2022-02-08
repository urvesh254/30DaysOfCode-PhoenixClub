#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int totalTasks, totalPeople;
  cin >> totalTasks >> totalPeople;
  
  vector<int> tasks(totalTasks), people(totalPeople);
  for (auto &task: tasks) cin >> task;
  for (auto &person: people) cin >> person;
  
  sort(tasks.begin(), tasks.end(), greater<int>());
  sort(people.begin(), people.end(), greater<int>());

  int currTask = 0, currPerson = 0, tasksDone = 0;
  while (currTask < totalTasks && currPerson < totalPeople) {
    if (tasks[currTask] <= people[currPerson]) {
      tasksDone++;
      currPerson++;
    }
    currTask++;
  }

  cout << tasksDone << endl;
  return 0;
}
