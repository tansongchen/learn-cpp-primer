#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main() {
    list<int> li = {2, 3, 0, 4, 1, 0, 1};
    auto it = find(li.rbegin(), li.rend(), 0);
    if (it != li.rend()) cout << *it << endl;
    return 0;
}
