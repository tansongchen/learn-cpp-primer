#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {0, 1, 1, 2};
    vector<int> b = {0, 1, 1, 2, 3, 5, 8};
    bool q = true;
    int s = a.size() < b.size() ? a.size() : b.size();
    for (int i = 0; i < s; ++i) {
        if (a[i] != b[i]) q = false;
    }
    cout << q << endl;
    return 0;
}
