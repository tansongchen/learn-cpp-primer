#include <iostream>
using namespace std;

void recPrint(vector<int> vi, auto p) {
    if (p == vi.end()) return;
    recPrint(vi, ++p);
}

int main() {
    vector<int> vi = {1, 2, 3};
    recPrint(vi, vi.begin());
}