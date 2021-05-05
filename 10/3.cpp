#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;
    return 0;
}
