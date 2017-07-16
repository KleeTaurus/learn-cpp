#include <iostream>
using namespace std;
const int MAX = 3;

int main() {
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // let us have address of the last elment in pointer
    ptr = &var[MAX - 1];

    for (int i = MAX; i > 0; i--) {
        cout << "address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "value of var[" << i << "] = ";
        cout << *ptr << endl;

        ptr--;
    }

    return 0;
}
