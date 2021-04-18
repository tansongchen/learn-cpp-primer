#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
void output(vector<T> v) {
    cout << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> v1; // []
    vector<int> v2(10); // [0, ..., 0], 共 10 个
    vector<int> v3(10, 42); // [42, ..., 42], 共 10 个
    vector<int> v4{10}; // [10]
    vector<int> v5{10, 42}; // [10, 42]
    vector<string> v6{10}; // ["", ..., ""], 共 10 个
    vector<string> v7{10, "hi"}; // ["hi", ..., "hi"], 共 10 个
    output(v1);
    output(v2);
    output(v3);
    output(v4);
    output(v5);
    output(v6);
    output(v7);
    return 0;
}
