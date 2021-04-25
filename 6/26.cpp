#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    char *c1 = argv[1];
    char *c2 = argv[2];
    string s{c1};
    s += c2;
    cout << s << endl;
}
