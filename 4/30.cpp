#include <iostream>
using namespace std;

struct P {
    int mem[10];
};

int f() { return 0; }

int main() {
    int x, y, i = 0;
    float a, b;
    P *p = new P();
    sizeof x + y; // (sizeof x) + y
    sizeof p->mem[i]; // sizeof ((p->mem)[i])
    sizeof a < b; // (sizeof a) < b
    sizeof f(); // sizeof (f())
    return 0;
}
