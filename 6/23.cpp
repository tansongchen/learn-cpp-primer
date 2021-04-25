#include <iostream>
using namespace std;

void print(const int *beg) {
    for (int i = 0; i != 2; ++i) {
        cout << beg[i] << endl;
    }
}
void print(const int *beg, const int *end) {
    for (const int *p = beg; p != end; ++p) {
        cout << *p << endl;
    }
}
void print(const int *beg, size_t size) {
    for (int i = 0; i != size; ++beg) {
        cout << *beg << endl;
    }
}
void print(int (&array)[2]) {
    for (int i = 0; i != 2; ++i) {
        cout << array[i] << endl;
    }
}

int main() {
    int j[2] = {0, 1};
    print(j);
    print(begin(j), end(j));
    return 0;
}
