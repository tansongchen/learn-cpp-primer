#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main() {
    list<int> li = {1, 2, 3, 4, 5};
    deque<int> di1, di2;
    for (auto &i : li) {
        if (i % 2) di1.push_back(i);
        else di2.push_back(i);
    }
    return 0;
}
