#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, -1};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0) {
        cout << *++pbeg << endl;
    }
    return 0;
}
