#include <iostream>
using namespace std;

int main() {
    int a = 1;
    decltype(a) b = a; // int
    auto c = a; // int

    int &d = a;
    decltype(d) e = d; // int &
    auto f = d; // int
    return 0;
}
