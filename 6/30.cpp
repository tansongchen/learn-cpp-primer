#include <iostream>
using namespace std;

bool str_subrange(const string &s1, const string &s2) {
    if (s1.size() == s2.size()) return s1 == s2;
    auto size = s1.size() < s2.size() ? s1.size() : s2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (s1[i] != s2[i]) return false;
    }
}

int main() {

    return 0;
}
