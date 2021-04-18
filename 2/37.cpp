#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype(a = b) d = a; // int &
    return 0;
}
