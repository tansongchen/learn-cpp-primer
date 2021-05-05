#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    multiset<string> c{"1"};
    vector<string> v{"1"};
    copy(v.begin(), v.end(), inserter(c, c.end()));
    // copy(v.begin(), v.end(), back_inserter(c)); // 没有 push_back
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));
    return 0;
}
