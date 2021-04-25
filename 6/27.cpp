#include <iostream>
using namespace std;

int sum(initializer_list<int> li) {
    int sum = 0;
    for (const auto &i : li) {
        sum += i;
    }
    return sum;
}

int main() {
    int s = sum({1, 2, 3});
    cout << s << endl;
}
