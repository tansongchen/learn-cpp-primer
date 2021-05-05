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

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });
    auto count = words.end() - wc;
    cout << count << " " << sz << endl;
    for_each(wc, words.end(), [](const string &s){ cout << s << " ";});
}

int main() {

    return 0;
}
