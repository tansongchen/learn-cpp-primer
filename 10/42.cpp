#include <iostream>
#include <list>
using namespace std;

void elimDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    list<string> words{"1", "2", "1", "3", "3"};
    elimDups(words);
    for (auto &word : words) cout << word << endl;
    return 0;
}
