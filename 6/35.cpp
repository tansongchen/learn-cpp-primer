#include <iostream>
using namespace std;

int factorial(int val) {
    if (val != 0) {
        return factorial(val--) * val; // 未定义行为！
    }
    return 1;
}

int main() {
    cout << factorial(5) << endl;
    return 0;
}
