#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> li(vi.rbegin() + 3, vi.rend() - 3);
    for (auto &item : li) cout << item << endl;
    return 0;
}
