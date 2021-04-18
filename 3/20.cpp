#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int i;
    while (cin >> i) {
        v.push_back(i);
    }
    for (size_t k = 0; k != v.size() - 1; ++k) {
        cout << v[k] + v[k+1] << " ";
    }
    cout << endl;
    for (size_t k = 0; k != v.size(); ++k) {
        cout << v[k] + v[v.size() - k - 1] << " ";
    }
    cout << endl;
}
