#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<string,int>> vp;
    string s;
    int i;
    while (cin >> s >> i) {
        // pair<string, int> p{s, i};
        // vp.push_back(p);
        vp.push_back(make_pair(s, i));
    }
    return 0;
}
