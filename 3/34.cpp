#include <iostream>
using namespace std;

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    int *p1 = &a[1];
    int *p2 = a;
    p1 += p2 - p1;
    cout << *p1 << endl;
    return 0;
}
