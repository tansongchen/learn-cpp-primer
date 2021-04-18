#include <iostream>
using namespace std;

int *getPtr() {
    return nullptr;
}

int main() {
    int i, p;
    if (p = getPtr() != 0) { cout << "cond 1 true" << endl; }
    if (i = 1024) { cout << "cond 2 true" << endl; }
    return 0;
}
