#include <iostream>
#include <memory>
using namespace std;

int main() {
    int *q = new int(42), *r = new int(100);
    r = q; // r 和 q 现在指向同一块内存，r 原来的内存泄露了
    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    r2 = q2; // r2 和 q2 现在指向同一块内存，r2 原来的内存释放了
    return 0;
}
