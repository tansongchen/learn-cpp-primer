#include <iostream>
using namespace std;

int txt_size() { return 1024; }

int main() {
    unsigned buf_size = 1024;
    int a[buf_size];
    int b[4 * 7 - 14];
    int c[txt_size()];
    // char d[11] = "fundamental"; // 太长
    return 0;
}
