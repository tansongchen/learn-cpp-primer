#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi{1, 2, 3, 4};
    for (auto &i : vi) i = (i % 2) ? 2 * i : i;
    for (auto &i : vi) cout << i << endl;
    return 0;
}
