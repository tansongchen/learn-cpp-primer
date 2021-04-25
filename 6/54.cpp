#include <iostream>
#include <vector>
using namespace std;

int f(int, int);

int main() {
    vector<decltype(f) *> v;
    return 0;
}
