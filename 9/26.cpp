#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vi(begin(ia), end(ia));
    list<int> li(begin(ia), end(ia));
    for (auto viit = vi.begin(); viit != vi.end(); *viit % 2 ? ++viit : viit = vi.erase(viit));
    for (auto liit = li.begin(); liit != li.end(); *liit % 2 ? liit = li.erase(liit) : ++liit);
    for (auto &item : vi) cout << item << " ";
    cout << endl;
    for (auto &item : li) cout << item << " ";
    cout << endl;
    return 0;
}
