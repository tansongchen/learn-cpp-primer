#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int compare(const string &s1, const string &s2) {
    if (s1 == s2) return 0;
    if (s1 > s2) return 1;
    return -1;
}

int main() {
    string s1("hello"), s2("world");
    char cs1[] = "hello", cs2[] = "world";
    cout << compare(s1, s2) << " " << strcmp(cs1, cs2) << endl;
    return 0;
}
