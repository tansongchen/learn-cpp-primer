#include <iostream>
using namespace std;

int compare(const int a, const int *const p) {
    return (a < *p) ? *p : a;
}

int main() {
    int a = 1;
    int b = 2;
    int *p = &b;
    cout << compare(a, p) << endl;
}