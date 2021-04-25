#include <iostream>
using namespace std;

int abs(int n) { return n >= 0 ? n : -n; }

int main() {
    cout << abs(-1) << endl;
    return 0;
}
