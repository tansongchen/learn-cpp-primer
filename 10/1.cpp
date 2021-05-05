#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int i;
    while (cin >> i) vi.push_back(i);
    cout << count(vi.begin(), vi.end(), 5) << endl;
    return 0;
}
