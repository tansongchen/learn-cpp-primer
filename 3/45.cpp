#include <iostream>
using namespace std;

int main(){
    int a[2][3] = {0, 1, 2, 3, 4, 5};
    // 1
    for (auto &row : a) {
        for (auto &num : row) {
            cout << num << " ";
        }
    }
    cout << endl;
    // 2
    for (size_t i = 0; i != 2; ++i) {
        for (size_t j = 0; j != 3; ++j) {
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
    // 3
    for (auto row = begin(a); row != end(a); ++row) {
        for (auto p = begin(*row); p != end(*row); ++p) {
            cout << *p << " ";
        }
    }
    cout << endl;
}
