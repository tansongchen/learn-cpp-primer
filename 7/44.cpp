#include <iostream>
#include <vector>
using namespace std;

class NoDefault {
public:
    NoDefault(int n) {}
};

class C {
public:
    NoDefault mem;
    C(): mem(0) {}
};

int main() {
    vector<NoDefault> vec(10);
    return 0;
}
