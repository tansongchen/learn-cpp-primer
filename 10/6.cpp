#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    fill_n(v.begin(), v.size(), 0);
    for (auto &item : v) cout << item << endl;
    return 0;
}
