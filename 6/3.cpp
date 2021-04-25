#include <iostream>
using namespace std;

int fact(int n) { return n == 0 ? 1 : n * fact(n - 1); }

int main() {
    cout << fact(10) << endl;
    return 0;
}
