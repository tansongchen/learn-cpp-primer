#include <iostream>
using namespace std;

int main() {
    int i = 0;
    auto f = [i]() mutable -> bool {
        if (i == 0) return true;
        while (--i > 0); return false;
    };
    cout << f() << endl;
    return 0;
}
