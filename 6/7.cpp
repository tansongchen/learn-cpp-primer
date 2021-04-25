#include <iostream>
using namespace std;

int counter() {
    static int n = 0;
    return n++;
}

int main() {
    cout << counter() << endl;
    cout << counter() << endl;
    cout << counter() << endl;
    return 0;
}
