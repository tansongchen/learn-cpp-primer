#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v1(10);
    list<int> v2(10);
    vector<int> v3(v2.begin(), v2.end());
    cout << (v1 == v3) << endl;
    return 0;
}
