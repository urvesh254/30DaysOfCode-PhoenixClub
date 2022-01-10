#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int n;
    cin >> n;
    double h = 0;
    for (int c = 1; c <= n; c++) {
        h += ((double)1 / c);
    }
    cout << "Harmonic sum upto 4 decimal places: " << fixed << setprecision(4) << h << endl;
    return 0;
}