#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto begin = v.begin();
    while (begin != v.end()) {
        ++begin;
        // 如果不赋值，begin 失效
        // begin = v.insert(begin, 42);
        v.insert(begin, 42);
        ++begin;
    }
    for (auto &item : v) cout << item << endl;
    return 0;
}
