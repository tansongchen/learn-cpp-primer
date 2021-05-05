#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

int main() {
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto liit = li.begin();
    while (liit != li.end()) {
        if (*liit % 2) {
            liit = li.insert(liit, *liit);
            ++liit;
            ++liit;
        } else {
            liit = li.erase(liit);
        }
    }
    for (auto &item : li) cout << item << endl;
    forward_list<int> fi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto fiit = fi.begin(), fiit2 = fi.before_begin();
    while (fiit != fi.end()) {
        if (*fiit % 2) {
            fiit = fi.insert_after(fiit, *fiit);
            ++fiit;
            ++fiit2;
            ++fiit2;
        } else {
            fiit = fi.erase_after(fiit2);
        }
    }
    for (auto &item : fi) cout << item << endl;
    return 0;
}
