#include <iostream>
using namespace std;

int main() {
    int i = 0;
    // double *dp = &i; 不能用 double* 指向 int
    // int *ip = i; 不能用 int 初始化 int*
    int *p = &i;
    return 0;
}
