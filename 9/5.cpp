#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int n) {
    for (auto it = begin; it != end; ++it) if (*it == n) return it;
    return end;
}

int main() {
    int n = 4;
    vector<int> v = {1, 2, 3, 4, 5};
    cout << *find(v.begin(), v.end(), n) << endl;
    return 0;
}
