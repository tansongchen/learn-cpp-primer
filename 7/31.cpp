#include <iostream>
using namespace std;

class X;
class Y;

class X {
    public:
    Y* y;
};

class Y {
    public:
    X x;
};

int main() {

    return 0;
}
