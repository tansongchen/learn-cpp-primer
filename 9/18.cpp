#include <iostream>
#include <list>
using namespace std;

int main() {
    string s;
    list<string> ds;
    while (cin >> s) {
        ds.push_back(s);
    }
    for (auto &s : ds) cout << s << endl;
    return 0;
}
