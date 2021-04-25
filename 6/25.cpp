#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    char *c0 = argv[0];
    char *c1 = argv[1];
    char *c2 = argv[2];
    char *c3 = argv[3];
    char *c4 = argv[4];
    cout << "argv[0] = \"" << c0 << "\";" << endl;
    cout << "argv[1] = \"" << c1 << "\";" << endl;
    cout << "argv[2] = \"" << c2 << "\";" << endl;
    cout << "argv[3] = \"" << c3 << "\";" << endl;
    cout << "argv[4] = \"" << c4 << "\";" << endl;
    cout << "argv[5] = 0" << endl;
}
