#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> vs{"hello", "world"};
    auto iter = vs.begin();
    *iter++; // 先递增，然后把原来的对象解引用
    // (*iter)++; // 错误，字符串不能 ++
    // *iter.empty(); // 错误，迭代器没有 empty() 成员
    iter->empty(); // iter 指向的字符串是否为空
    // ++*iter; // 错误，字符串不能 ++
    iter++->empty(); // 先递增，然后看原来的对象指向的字符串是否为空
    return 0;
}
