#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<char *> lo = {"Hello", "world", "!"};
    vector<string> vs;
    vs.assign(lo.begin(), lo.end());
    return 0;
}
