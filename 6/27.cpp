#include <iostream>
using namespace std;

int sum(initializer_list<int> intList) {
    int sum = 0;
    for (auto p = intList.begin(); p != intList.end(); p++) {
        sum += *p;
    }
    return sum;
}

int main() {
    int s = sum({1, 2, 3});
    cout << s << endl;
}