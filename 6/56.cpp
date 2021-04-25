#include <iostream>
#include <vector>
using namespace std;

int f(int, int);
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    vector<decltype(f) *> v = {&add, &subtract, &multiply, &divide};
    int a = 1, b = 2;
    cout << (*v[0])(a, b) << (*v[1])(a, b) << (*v[2])(a, b) << (*v[3])(a, b) << endl;
    return 0;
}
