#include <iostream>
using namespace std;

int main() {
    unsigned nff = 0, nfl = 0, nfi = 0;
    char c, cc;
    while ((c = getchar()) != EOF) {
        if (c == 'f') {
            cc = getchar();
            switch (cc) {
                case 'f': ++nff; break;
                case 'l': ++nfl; break;
                case 'i': ++nfi; break;
                default: break;
            }
        }
    }
    cout << nff << " " << nfl << " " << nfi << endl;
    return 0;
}
