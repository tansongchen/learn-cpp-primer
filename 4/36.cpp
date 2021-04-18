#include <iostream>
using namespace std;

int main() {
    int i = 4;
    double d = 3.3;
    i *= d;
    cout << i << endl; // 13
    int ii = 4;
    double dd = 3.3;
    ii *= static_cast<int>(dd);
    cout << ii << endl;
    return 0;
}
