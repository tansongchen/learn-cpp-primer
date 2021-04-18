#include <iostream>
using namespace std;

int main() {
    double dval; int ival; int *pi;
    // dval = ival = pi = 0; // 因为 pi = 0 的返回值是空指针，不能赋给 ival。
    dval = ival = 0; pi = 0;
    return 0;
}
