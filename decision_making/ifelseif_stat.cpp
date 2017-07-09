#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int a = 100;

    // check the boolean condition
    if (a == 10) {
        // if condition is true then print the following
        cout << "value of a is 10" << endl;
    } else if (a == 20) {
        // if else if condition is true
        cout << "value of a is 20" << endl;
    } else if (a == 30) {
        // if else if condition is true
        cout << "value of a is 30" << endl;
    } else {
        // if none of the condition is true
        cout << "value of a is not matching" << endl;
    }

    cout << "Exact value of a is: " << a << endl;

    return 0;
}
