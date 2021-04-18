#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i = 1;
    int *ptr = &i, ival;
    vector<int> vec;
    ptr != 0 && *ptr++;
    ival++ && ival;
    // vec[ival++] <= vec[ival]; 未定义
    return 0;
}
