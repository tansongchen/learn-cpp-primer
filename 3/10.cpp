#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    for (size_t i = 0; i < s.size(); i = i + 1) {
        if (!ispunct(s[i])) {
            t += s[i];
        }
    }
    cout << t << endl;
}
