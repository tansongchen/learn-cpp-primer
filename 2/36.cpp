#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype((b)) d = a; // int &
    ++c;
    ++d;
    cout << a << b << c << d << endl; // 4444
    return 0;
}
