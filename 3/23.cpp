#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it *= 2;
    }
    for (int c : v) {
        cout << c << " ";
    }
    cout << endl;
}
