#include <iostream>
using namespace std;

int main() {
    int x[10];
    int *p = x;
    cout << sizeof(x) << " " << sizeof(*x) << endl; // 40, 4
    cout << sizeof(p) << " " << sizeof(*p) << endl; // 8, 4
}
