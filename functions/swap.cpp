#include <iostream>
using namespace std;

// function declaration
void swap(int x, int y);

void swap(int x, int y) {
    int temp;
    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */

    return;
}

int main() {
    // local variable declaration
    int a = 100;
    int b = 200;

    cout << "before swap, value of a: " << a << endl;
    cout << "before swap, value of b: " << b << endl;

    // calling a function to swap the values
    swap(a, b);

    cout << "after swap, value of a: " << a << endl;
    cout << "after swap, value of b: " << b << endl;

    return 0;
}
