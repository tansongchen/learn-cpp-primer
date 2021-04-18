#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        v.push_back(s);
    }
    for (auto &c : v) {
        for (auto &d : c) {
            d = toupper(d);
        }
    }
    for (auto c : v) cout << c << endl;
}
