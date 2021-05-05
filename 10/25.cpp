#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
    return s.size() >= sz;
}

bool isShorter(const string &s1, const string &s2) { return s1.size() < s2.size(); }

void elimDups(vector<string> &words) {
    stable_sort(words.begin(), words.end(), isShorter);
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    auto f = bind(check_size, _1, sz);
    auto wc = partition(words.begin(), words.end(), f);
    auto count = wc - words.begin();
    cout << count << " " << sz << endl;
    for_each(words.begin(), wc, [](const string &s){ cout << s << " ";});
}

int main() {

    return 0;
}
