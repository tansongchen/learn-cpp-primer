#include <iostream>
using namespace std;

int main() {
    int i;
    long l;
    long long ll;
    short s;
    cout << sizeof(i) << sizeof(l) << sizeof(ll) << sizeof(s) << endl;
    float f;
    double d;
    cout << sizeof(f) << sizeof(d) << endl;
    return 0;
}
