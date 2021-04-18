#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int *p = a; p != a + 10; *p++ = 0);
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}
