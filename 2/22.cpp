#include <iostream>
using namespace std;

int main() {
    int i = 0, *p = &i;
    if (p) { cout << "p points to an object" << endl; }
    if (*p) { cout << "the integer p points to is not zero" << endl; }
    return 0;
}
