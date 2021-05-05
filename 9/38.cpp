#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    for (int i = 1; i != 100; ++i) {
        vi.push_back(i);
        cout << vi.size() << " " << vi.capacity() << endl;
    }
    return 0;
}
