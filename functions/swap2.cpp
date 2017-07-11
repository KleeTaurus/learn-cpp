#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

// function declaration to swap the values
void swap(int &x, int &y) {
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

    /* calling a function to swap the values.
     * &a indicates pointer to a ie. address of variable a and
     * &b indicates pointer to b ie. address of variable b.
     */
    swap(a, b);

    cout << "after swap, value of a: " << a << endl;
    cout << "after swap, value of b: " << b << endl;

    return 0;
}
