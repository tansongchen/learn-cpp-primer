#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> vs;
    string word;
    while (cin >> word) {
        if (all_of(vs.begin(), vs.end(), [&word](const string &s){ return s != word; })) {
            vs.push_back(word);
        }
    }
    return 0;
}
