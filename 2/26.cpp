#include <iostream>
using namespace std;

int main() {
    // const int buf; 无初值
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    // ++sz; 不能改变
    return 0;
}
