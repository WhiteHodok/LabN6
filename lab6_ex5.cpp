#include <iostream>
#include <string>

using namespace std;

void greeting(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greeting("Alice");
    greeting("Bob");
    greeting("Charlie");

    return 0;
}

