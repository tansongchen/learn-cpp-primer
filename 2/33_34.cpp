#include <iostream>
using namespace std;

int main() {
    int i = 0, &r = i;
    auto a = r; // int

    const int ci = i, &cr = ci;
    auto b = ci; // int
    auto c = cr; // int
    auto d = &i; // int *
    auto e = &ci; // const int *
    const auto f = ci; // const int
    auto &g = ci; // const int &
    // auto &h = 42; 不能为非常量引用绑定字面值
    const auto &j = 42; // const int &

    auto k = ci, &l = i; // int, int &
    auto &m = ci, *p = &ci; // const int &, const int *
    // auto &n = i, *p2 = &ci; n 推出 int &, p2 推出 const int *

    a = 42;
    b = 42;
    c = 42;
    // d = 42; d 是指针
    // e = 42; e 是指针
    // g = 42; g 是 const int &
    return 0;
}
