#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> li;
    vector<int> vi = {1, 2, 3, 3, 4};
    auto bli = back_inserter(li);
    unique_copy(vi.begin(), vi.end(), bli);
    for (auto &item : li) cout << item << endl;
    return 0;
}
