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
    return 0;
}
