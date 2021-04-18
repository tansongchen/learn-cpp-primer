#include <iostream>
using namespace std;

int main() {
    int i, &r = i;
    i = 5;
    r = 10;
    cout << i << " " << r << endl;
    return 0;
}
