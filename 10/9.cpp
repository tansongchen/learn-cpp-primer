#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2) { return s1.size() < s2.size(); }

void elimDups(vector<string> &words) {
    stable_sort(words.begin(), words.end(), isShorter);
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main() {
    vector<string> s{"11", "11", "2", "3"};
    elimDups(s);
    for (auto &elem : s) cout << elem << endl;
    return 0;
}
