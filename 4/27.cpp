#include <iostream>
using namespace std;

int main() {
    unsigned long ul1 = 3, ul2 = 7;
    cout << (ul1 & ul2) << (ul1 | ul2) << (ul1 && ul2) << (ul1 || ul2) << endl; // 3711
    return 0;
}
