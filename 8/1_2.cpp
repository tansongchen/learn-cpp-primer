#include <iostream>
using namespace std;

istream &f(istream &is) {
    string s;
    while (true) {
        is >> s;
        if (is.eof()) break;
        cout << s << endl;
    }
    is.clear();
    cout << is.good() << endl;
    return is;
}

int main() {
    f(cin);
    return 0;
}
