#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<int>> ivec;
    // vector<string> svec = ivec; 不能用元素是 vector<int> 的 vector 初始化元素是 string 的 vector
    vector<string> svec(10, "null");
    return 0;
}
