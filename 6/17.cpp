#include <iostream>
using namespace std;

bool containCapital(const string s) {
    bool flag = false;
    for (auto c: s) {
        if (isupper(c)) {
            flag = true;
        }
    }
    return flag;
}

void towardCapital(string &s) {
    for (auto &c: s) {
        c = toupper(c);
    }
}

int main() {
    string s = "A string.";
    cout << containCapital(s) << endl;
    towardCapital(s);
    cout << s << endl;
}