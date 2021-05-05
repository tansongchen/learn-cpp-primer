#include <iostream>
using namespace std;

int main() {
    int adder = 1;
    auto f = [adder](int a){ return adder + a; };
    return 0;
}
