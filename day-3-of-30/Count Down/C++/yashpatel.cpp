#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string num;
    cin >> num;
    if (num.size() % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
    return 0;
}