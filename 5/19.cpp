#include <iostream>
#include <string>
using namespace std;

int main() {
    do {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (s1.size() < s2.size() ? s1 : s2) << endl;
    } while (cin);
    return 0;
}
