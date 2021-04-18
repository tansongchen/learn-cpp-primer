#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(begin(a), end(a));
    for (auto i : v) { cout << i << " "; };
    cout << endl;
    return 0;
}
