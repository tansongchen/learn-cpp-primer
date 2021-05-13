#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) { cout << ptr.use_count() << endl; } // 1

int main() {
    shared_ptr<int> p(new int (42));
    cout << p.use_count() << endl; // 1
    process(shared_ptr<int>(p.get()));
    cout << p.use_count() << endl; // 错误，函数返回时已经销毁了 p 的空间
    return 0;
}
