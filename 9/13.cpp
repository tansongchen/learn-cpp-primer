#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<int> li(10);
    vector<int> vi(10, 10);
    vector<double> vd(li.begin(), li.end());
    vector<double> vd2(vi.begin(), vi.end());
    return 0;
}
