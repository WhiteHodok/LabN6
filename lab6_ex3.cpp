#include <iostream>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    cout << max(5, 10) << endl;
    cout << max(100, 20) << endl;
    cout << max(-7, 4) << endl;

    return 0;
}

