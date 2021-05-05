#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> li;
    deque<int> di;
    vector<int> si;
    auto ili = inserter(li, li.end());
    auto fdi = front_inserter(di);
    auto bsi = back_inserter(si);
    copy(vi.begin(), vi.end(), ili);
    copy(vi.begin(), vi.end(), fdi);
    copy(vi.begin(), vi.end(), bsi);
    for (auto &item : li) cout << item << " "; cout << endl;
    for (auto &item : di) cout << item << " "; cout << endl;
    for (auto &item : si) cout << item << " "; cout << endl;
    return 0;
}
