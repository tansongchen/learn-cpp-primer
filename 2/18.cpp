#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int *p = new int;
    p = 0;
    p = &i;
    *p = 2;
    return 0;
}
