#include <iostream>
using namespace std;

int fact(int n) { return n == 0 ? 1 : n * fact(n - 1); }

void ui() {
    cout << "please input a non-negative integer" << endl;
    int n;
    cin >> n;
    cout << fact(n) << endl;
}

int main() {
    ui();
    return 0;
}
