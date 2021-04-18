#include <iostream>
using namespace std;

int main() {
    int i = 0;
    const int v2 = 0; // 顶层
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2; // 底层
    const int *const p3 = &i; // 顶层和底层
    const int &r2 = v2; // 底层

    r1 = v2; // 可以用 v2 给 r1 指向的 v1 赋值
    // p1 = p2; 底层 const 资格不同
    p2 = p1; // 可以让 const int* 指向 int
    // p1 = p3; 底层 const 资格不同
    p2 = p3; // 底层 const 资格相同
    return 0;
}
