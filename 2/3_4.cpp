#include <iostream>
using namespace std;

int main() {
    unsigned u = 10, uu = 42;
    cout << uu - u << " " << u - uu << endl; // 32, 4294967264
    int i = 10, ii = 42;
    cout << ii - i << " " << i - ii << endl; // 32, -32
    cout << i - u << " " << u - i << endl; // 0, 0
    return 0;
}
