#include <iostream>
using namespace std;

int func(int param) { // 形参是在调用时用实参初始化的，在调用结束后销毁
    static int staticVal = 0; // 局部静态变量是在调用前值初始化的，在程序结束后销毁
    int val = 1; // 局部变量是默认初始化的，在调用结束后销毁
    return param;
}

int main() {
    return 0;
}
