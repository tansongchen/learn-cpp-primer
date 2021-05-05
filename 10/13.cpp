#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isLongerThanFive(const string &s) { return s.size() > 5; }

int main() {
    vector<string> v{"apple", "banana", "orange"};
    partition(v.begin(), v.end(), isLongerThanFive);
    for (auto &item : v) cout << item << endl;
    return 0;
}
