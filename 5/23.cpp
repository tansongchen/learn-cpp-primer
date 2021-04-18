#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) throw runtime_error("Divided by zero!");
    cout << a / b << endl;
    return 0;
}
