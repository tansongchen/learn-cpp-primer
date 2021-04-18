#include <iostream>
using namespace std;

int main() {
    const string s = "Keep out!";
    for (auto &c : s) { // c 是 const char &
        cout << c << endl;
    }
    return 0;
}
