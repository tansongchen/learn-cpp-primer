#include <iostream>
#include <string>
using namespace std;

int main() {
    bool happened = false;
    string sprev, scurr;
    while (cin >> scurr) {
        if (scurr[0] < 'A' || scurr[0] > 'Z') continue;
        if (scurr == sprev) {
            happened = true;
            cout << scurr << endl;
            break;
        }
        else sprev = scurr;
    }
    if (!happened) cout << "no recurring words" << endl;
    return 0;
}
