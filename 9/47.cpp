#include <iostream>
using namespace std;

int main() {
    string s{"ab2c3d7R4E6"}, numbers{"1234567890"}, alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for (string::size_type pos = 0; (pos = s.find_first_of(numbers, pos)) != s.npos; ++pos) {
        cout << pos << " " << s[pos] << endl;
    }
    for (string::size_type pos = 0; (pos = s.find_first_of(alphabet, pos)) != s.npos; ++pos) {
        cout << pos << " " << s[pos] << endl;
    }
    for (string::size_type pos = 0; (pos = s.find_first_not_of(alphabet, pos)) != s.npos; ++pos) {
        cout << pos << " " << s[pos] << endl;
    }
    for (string::size_type pos = 0; (pos = s.find_first_not_of(numbers, pos)) != s.npos; ++pos) {
        cout << pos << " " << s[pos] << endl;
    }
    return 0;
}
