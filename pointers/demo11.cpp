/* C++ Pointer to Pointer (Multiple Indirection) */
#include <iostream>
using namespace std;

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 3000;
    // take the address of var
    ptr = &var;
    // take the adddress of ptr using address of operator &
    pptr = &ptr;

    // take the value using pptr
    cout << "value of var: " << var << endl;
    cout << "value available at *ptr: " << *ptr << endl;
    cout << "value available at **pptr: " << **pptr << endl;

    cout << "address of var: " << &var << endl;
    cout << "value of ptr: " << ptr << endl;
    cout << "value of *pptr: " << *pptr << endl;
    cout << "value of pptr: " << pptr << endl;

    return 0;
}
