#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi{1, 2, 3, 4, 5};
    for (auto it = vi.rbegin(); it != vi.rend(); cout << *it++ << endl);
    return 0;
}
