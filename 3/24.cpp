#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int i;
    while (cin >> i) {
        v.push_back(i);
    }
    for (auto it = v.begin(); it != v.end() - 1; ++it) {
        cout << *it + *(it + 1) << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it + *(v.begin() + (v.end() - it - 1)) << " ";
    }
    cout << endl;
}
