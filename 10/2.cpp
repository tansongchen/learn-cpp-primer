#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> vi;
    string s;
    while (cin >> s) vi.push_back(s);
    cout << count(vi.begin(), vi.end(), "yes") << endl;
    return 0;
}
