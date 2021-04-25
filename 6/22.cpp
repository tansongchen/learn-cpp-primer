#include <iostream>
using namespace std;

void swap(const int *p, const int *q) {
    const int *temp = p;
    p = q;
    q = temp;
}

int main() {
    int a = 1;
    int b = 2;
    int *p = &a;
    int *q = &b;
    swap(p, q);
    cout << *p << *q << endl;
    b = 3;
    a = 4;
    cout << *p << *q << endl;
}
