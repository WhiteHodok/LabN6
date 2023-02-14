#include <iostream>
using namespace std;

bool isPositive(int num) {
    return num > 0;
}

int main() {
    int a = 5, b = -10, c = 0;
    cout << a << " is positive? " << isPositive(a) << endl;
    cout << b << " is positive? " << isPositive(b) << endl;
    cout << c << " is positive? " << isPositive(c) << endl;
    return 0;
}
