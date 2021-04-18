#include <iostream>
using namespace std;

int main() {
    // int i = -1, &r = 0; // 非常量引用的初始值必须为左值。
    int i2 = 1;
    int *const p2 = &i2;
    const int i = -1, &r = 0;
    const int *const p3 = &i2;
    const int *p1 = &i2;
    // const int &const r2; // 引用不是对象，不能用 const 修饰
    const int i2 = i, &r = i;
    return 0;
}
