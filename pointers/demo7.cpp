/* C++ pointers vs arrays */
#include <iostream>
using namespace std;
const int MAX = 3;

int main() {
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer
    ptr = var;

    for (int i = 0; i < MAX; i++) {
        cout << "address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }

    return 0;
}
