#include <iostream>
using namespace std;

int main() {
    unsigned na = 0, ne = 0, ni = 0, no = 0, nu = 0;
    char c;
    while (cin >> c) {
        switch (c) {
            case 'a': case 'A': ++na; break;
            case 'e': case 'E': ++ne; break;
            case 'i': case 'I': ++ni; break;
            case 'o': case 'O': ++no; break;
            case 'u': case 'U': ++nu; break;
            default: break;
        }
    }
    cout << na << " " << ne << " " << ni << " " << no << " " << nu << endl;
    return 0;
}
