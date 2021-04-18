#include <iostream>
using namespace std;

bool isPointingToAnObject(int *p) {
    return p ? true : false;
}

int main() {
    int *p1, *p2 = 0, i = 0, *p3 = &i;
    cout << "p1:" << isPointingToAnObject(p1) << endl;
    cout << "p2:" << isPointingToAnObject(p2) << endl;
    cout << "p3:" << isPointingToAnObject(p3) << endl;
    return 0;
}
