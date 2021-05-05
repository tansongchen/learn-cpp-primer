#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
    // while (iter1 < iter2) ++iter1; // list<>::iterator 没有 < 运算符
    return 0;
}
