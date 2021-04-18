#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    auto cnt = v.size();
    for (decltype(cnt) i = 0; i != v.size(); i++, cnt--) v[i] = cnt;
    for (auto &c : v) cout << c << endl;
    return 0;
}
