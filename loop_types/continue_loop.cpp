#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int a = 10;

    // do loop execution
    do {
        if (a == 15) {
            // skip the iteration
            continue;
        }

        cout << "value of a: " << a << endl;
    } while (++a < 20);

    return 0;
}
