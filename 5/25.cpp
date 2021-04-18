#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (true) {
        try {
            if (b == 0) throw runtime_error("Divided by zero!\n");
            cout << a / b << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what() << "Please input new numbers" << endl;
            cin >> b;
        }
    }
    return 0;
}
