#include <iostream>
using namespace std;

void jh(int *a, int *b) {
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int a = 1, b = 2;
    jh(&a, &b);
    cout << a << " " << b << endl;
}