#include <iostream>
#include <memory>
using namespace std;

int main() {
    using P = unique_ptr<int>;
    int i = 2014, *pi = &i, *pi2 = new int(2048);
    // P p0(i); // 不能用值初始化
    P p1(pi); // 不能用静态内存初始化
    P p2(pi2);
    P p3(&i); // 不能用静态内存初始化
    P p4(new int (2048));
    P p5(p2.get()); // 导致 double free
    return 0;
}
