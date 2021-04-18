#include <iostream>
using namespace std;

int main() {
    unsigned na = 0, ne = 0, ni = 0, no = 0, nu = 0;
    char c;
    while (cin >> c) {
        if (c == 'a') ++na;
        else if (c == 'e') ++ne;
        else if (c == 'i') ++ni;
        else if (c == 'o') ++no;
        else if (c == 'u') ++nu;
        else;
    }
    cout << na << " " << ne << " " << ni << " " << no << " " << nu << endl;
    return 0;
}
