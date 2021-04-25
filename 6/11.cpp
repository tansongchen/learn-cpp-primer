#include <iostream>
using namespace std;

void reset(int &r) { r = 0; }

int main() {
    int a = 1, &t = a;
    reset(t);
    cout << t << endl;
    return 0;
}
