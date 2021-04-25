#include <iostream>
using namespace std;

int &get(int *a, int index) { return a[index]; }

int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i) get(ia, i) = i;
    for (int i = 0; i != 10; ++i) cout << ia[i] << " ";
    cout << endl;
    return 0;
}
