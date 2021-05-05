#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 10);
    vector<int> v4{10, 10};
    vector<int> v5(v4);
    vector<int> v6(v5.begin(), v5.end());
    return 0;
}
