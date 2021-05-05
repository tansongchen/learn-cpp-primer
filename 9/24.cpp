#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int i1 = vi.front(), i2 = *vi.begin(), i3 = vi[0];
    cout << i1 << " " << i2 << " " << i3 << endl;
    int i4 = vi.at(0);
    return 0;
}
