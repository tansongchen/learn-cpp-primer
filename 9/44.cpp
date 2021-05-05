#include <iostream>
using namespace std;

void modify(string &s, string oldVal, string newVal) {
    for (string::size_type i = 0; i < s.size(); ++i) {
        if (s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
        }
    }
}

int main() {
    string s = "go thru the hall";
    modify(s, "thru", "through");
    cout << s << endl;
    return 0;
}
