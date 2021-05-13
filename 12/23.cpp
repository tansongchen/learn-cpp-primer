#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c1[] = "Hello ", c2[] = "world!";
    char *c = new char[strlen(c1) + strlen(c2) + 1];
    for (int i = 0; i < strlen(c1); ++i) c[i] = c1[i];
    for (int i = 0; i < strlen(c2); ++i) c[strlen(c1) + i] = c2[i];
    cout << c << endl;
    string s1 = "Hello ", s2 = "world!";
    string s = s1 + s2;
    cout << s << endl;
    return 0;
}
