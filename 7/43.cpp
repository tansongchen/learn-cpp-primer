#include <iostream>
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

    return 0;
}
