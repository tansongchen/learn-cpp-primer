#include <iostream>
using namespace std;

string add(string s, string prefix, string suffix) {
    s.insert(0, prefix);
    s.insert(s.size(), suffix);
    return s;
}

int main() {
    cout << add("Miller", "Mr. ", " III") << endl;
    return 0;
}
