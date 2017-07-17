/* C++ array of pointer */
#include <iostream>
using namespace std;
const int MAX = 4;

int main() {
    char *names[MAX] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    for (int i = 0; i < MAX; i++) {
        cout << "value of var[" << i << "] = ";
        cout << names[i] << endl;
    }

    return 0;
}
