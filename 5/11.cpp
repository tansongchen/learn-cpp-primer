#include <iostream>
using namespace std;

int main() {
    unsigned na = 0, ne = 0, ni = 0, no = 0, nu = 0, nspace = 0, ntab = 0, nreturn = 0;
    char c;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case 'a': case 'A': ++na; break;
            case 'e': case 'E': ++ne; break;
            case 'i': case 'I': ++ni; break;
            case 'o': case 'O': ++no; break;
            case 'u': case 'U': ++nu; break;
            case ' ': ++nspace; break;
            case '\t': ++ntab; break;
            case '\n': ++nreturn; break;
            default: break;
        }
    }
    cout << na << " " << ne << " " << ni << " " << no << " " << nu << " " << nspace << " " << ntab << " " << nreturn << " " << endl;
    return 0;
}
