#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int a = 10;

    LOOP: do {
        if (a == 15) {
            a++;
            goto LOOP;
        }
    
        cout << "value of a: " << a << endl;
        a++;
    } while (a < 20);

    return 0;
}
