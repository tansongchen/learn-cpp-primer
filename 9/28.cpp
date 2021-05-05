#include <iostream>
#include <forward_list>
using namespace std;

void insert(forward_list<string> &fs, string s1, string s2) {
    auto fsit = fs.begin(), fsit2 = fs.before_begin();
    for (; fsit != fs.end(); ++fsit, ++fsit2) {
        if (*fsit == s1) {
            fs.insert_after(fsit, s2);
            return;
        }
    }
    fs.insert_after(fsit2, s2);
}

int main() {
    forward_list<string> fs = {"Hello", "world", "!"};
    insert(fs, "is", "my");
    for (auto &item : fs) cout << item << " ";
    return 0;
}
