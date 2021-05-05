#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, string> m;
    auto it = m.find("author");
    if (it != m.end()) m.erase(it);
    return 0;
}
