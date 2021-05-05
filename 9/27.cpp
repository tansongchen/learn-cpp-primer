#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fi = {1, 2, 3, 4, 5};
    for (auto prev = fi.before_begin(), curr = fi.begin(); curr != fi.end(); *curr % 2 ? curr = fi.erase_after(prev) : prev = curr++);
    for (auto &item : fi) cout << item << " ";
    cout << endl;
    return 0;
}
