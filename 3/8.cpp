#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    decltype(s.size()) i = 0;
    // while (i < s.size()) {
    //     s[i] = 'X';
    //     ++i;
    // }
    for (i = 0; i != s.size(); ++i) {
        s[i] = 'X';
    }
    cout << s << endl;
}
