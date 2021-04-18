#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[10], b[10];
    for (int i = 1; i != 10; ++i) a[i] = i;
    for (int i = 1; i != 10; ++i) b[i] = a[i];
    vector<int> va, vb;
    for (int i = 1; i != 10; ++i) va.push_back(i);
    vb = va;
    return 0;
}
