#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<string,int>> vp;
    string s;
    int i;
    while (cin >> s >> i) {
        vp.push_back({s, i});
    }
    return 0;
}
