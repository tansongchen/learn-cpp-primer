#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) { cout << ptr.use_count() << endl; } // 1

int main() {
    auto p = new int();
    auto sp = make_shared<int>();
    process(sp); // 用 sp 初始化 ptr，然后 ptr 返回时销毁
    // process(new int()); // 不能隐式转换
    // process(p); // 不能隐式转换
    process(shared_ptr<int>(p)); // 用 p 初始化 ptr，然后 ptr 返回时销毁，p 变为空悬指针
    return 0;
}
