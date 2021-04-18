#include <iostream>
using namespace std;

int main() {
    int ival = 1.01;
    // int &rval1 = 1.01; 1.01 不是对象
    int &rval2 = ival;
    // int &rval3; 必须初始化
    return 0;
}
