#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m{{1, 1}};
    auto it = m.begin();
    it->second = 2;
    return 0;
}
