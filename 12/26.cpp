#include <iostream>
#include <memory>
using namespace std;

int main() {
    unsigned n = 10;
    allocator<string> alloc;
    string *const p = alloc.allocate(n);
    string s;
    string *q = p;
    while (cin >> s && q != p + n) alloc.construct(q++);
    const size_t size = q - p;
    // 使用
    while (q != p) alloc.destroy(--q);
    alloc.deallocate(p, n);
    return 0;
}
