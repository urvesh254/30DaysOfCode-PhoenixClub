#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int factorails[10];
    factorails[0] = 1;
    factorails[1] = 1;

    for (int i = 2; i <= 9; i++) factorails[i] = i * factorails[i-1];

    string num;
    cin >> num;
    int sum = 0;
    for (auto digit: num) {
        sum += factorails[digit - '0'];
    }

    if (num == to_string(sum)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
