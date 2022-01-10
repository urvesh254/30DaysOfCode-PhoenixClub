#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin >> num;
    string binaryString;

    while (num != 0) {
        // using bitwise 'num & 1' you can find if the least significant bit is 1 or 0
        if (num & 1) binaryString += '1';
        else binaryString += '0';

        // since least significant bit is added to answer, now right shift the current number
        // to one position right
        num >>= 1;
    }

    // since we are appending least significant --> to --> most significant bit
    // our string is in reverse order, so reverse it again so it will give correct
    // bit pattern
    reverse(binaryString.begin(), binaryString.end());
    cout << binaryString << endl;
    return 0;
}