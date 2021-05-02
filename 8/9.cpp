#include <iostream>
#include <sstream>
using namespace std;

istream &f(istream &is) {
    string s;
    while (true) {
        is >> s;
        cout << s << endl;
        if (is.eof()) break;
    }
    is.clear();
    return is;
}

int main() {
    string s = "Hello world!";
    istringstream sin(s);
    f(sin);
    return 0;
}
