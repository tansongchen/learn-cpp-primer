#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool isShorterThanN(string s, string::size_type n) { return s.size() <= n; }

int main() {
    vector<string> v{"Hello", "world!"};
    cout << count_if(v.begin(), v.end(), bind(isShorterThanN, _1, 6)) << endl;
    return 0;
}
