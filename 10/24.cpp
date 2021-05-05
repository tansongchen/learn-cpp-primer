#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    vector<int> a{1, 2, 3, 4};
    string s{"is"};
    auto f = bind(check_size, s, _1);
    auto i = find_if(a.begin(), a.end(), f);
    cout << *i << endl;
    return 0;
}
