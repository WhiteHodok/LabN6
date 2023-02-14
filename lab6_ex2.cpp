#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int a = 3;
    int b = 5;

    cout << "Square of " << a << " is " << square(a) << endl;
    cout << "Square of " << b << " is " << square(b) << endl;

    return 0;
}

