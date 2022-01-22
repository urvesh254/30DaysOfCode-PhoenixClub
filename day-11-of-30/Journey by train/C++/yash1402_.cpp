#include <bits/stdc++.h>
using namespace std;

int main() {
  int totalBookings;
  cin >> totalBookings;

  vector<tuple<int, int, int>> bookings;
  for (int i = 0; i < totalBookings; i++) {
    int start, end, seats;
    cin >> start >> end >> seats;
    bookings.push_back(make_tuple(start, end, seats));
  }

  int totalTrains;
  cin >> totalTrains;
  vector<int> totalSeatsBooked(totalTrains);

  const int START = 0, END = 1, SEATS = 2;
  for (auto singleBooking: bookings) {
    int startTrain = get<START>(singleBooking);
    int endTrain = get<END>(singleBooking);
    int bookedSeats = get<SEATS>(singleBooking);

    for (int trainIndex = startTrain; trainIndex <= endTrain; trainIndex++) {
      totalSeatsBooked[trainIndex - 1] += bookedSeats;
    }
  }

  for (auto seats: totalSeatsBooked) cout << seats << " ";
  cout << endl;
  return 0;
}
