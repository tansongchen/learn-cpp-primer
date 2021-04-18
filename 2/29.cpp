#include <iostream>
using namespace std;

int main() {
    int i, *const cp = &i;
    int *p1, *const p2 = &i;
    const int ic = 1, &r = ic;
    const int *const p3 = &ic;
    const int *p;

    i = ic;
    // p1 = p3; // 不能将 const int* 值分配给 int* 指针
    // p1 = &ic; // 不能将 const int* 值分配给 int* 指针
    // p3 = &ic; // 常量指针不能修改
    // p2 = p1; // 常量指针不能修改
    // ic = *p3; // 常量整数不能修改
    return 0;
}
