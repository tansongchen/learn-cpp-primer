#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int *temp = new int{*b};
    *b = *a;
    *a = *temp;
}

int main() {
    int a = 1, b = 2;
    swap(&a, &b);
    cout << a << " " << b << endl;
}
