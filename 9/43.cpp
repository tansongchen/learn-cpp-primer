#include <iostream>
using namespace std;

void modify(string &s, string oldVal, string newVal) {
    for (auto p = s.begin(); p != s.end() - oldVal.size(); ++p) {
        string substr(p, p + oldVal.size());
        if (substr == oldVal) {
            p = s.erase(p, p + oldVal.size());
            p = s.insert(p, newVal.begin(), newVal.end());
        }
    }
}

int main() {
    string s = "go thru the hall";
    modify(s, "thru", "through");
    cout << s << endl;
    return 0;
}
