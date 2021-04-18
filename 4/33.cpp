#include <iostream>
using namespace std;

int main() {
    int s = 0;
    int x = 10, y = 10;
    s ? ++x, ++y : --x, --y;
    cout << x << " " << y << endl;
    return 0;
}
