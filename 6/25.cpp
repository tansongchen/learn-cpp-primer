#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    char c1[] = argv[1];
    char c2[] = argv[2];
    string s = "";
    for (auto it = begin(c1); it != end(c1); it++);
    cout << s << endl;
}