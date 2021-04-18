#include <iostream>
using namespace std;

int main() {
    string sum, s;
    cin >> sum;
    while (cin >> s) {
        sum = sum + " " + s;
    }
    cout << sum << endl;
}
