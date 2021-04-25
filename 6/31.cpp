#include <iostream>
using namespace std;

int &bad1() {
    int n = 1;
    return n;
}

const int &bad2() { return 2; }

int main() {
    int &r1 = bad1();
    const int &r2 = bad2();
    cout << r1 << r2 << endl;
    return 0;
}
