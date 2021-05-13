#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp = make_shared<int>();
    auto p = sp.get();
    delete p;
    // sp 指向的内存已经被释放，main 函数返回时发生错误
    return 0;
}
