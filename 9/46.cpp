#include <iostream>
using namespace std;

string add(string s, string prefix, string suffix) {
    s.insert(s.begin(), prefix.begin(), prefix.end());
    s.append(suffix);
    return s;
}

int main() {
    cout << add("Miller", "Mr. ", " III") << endl;
    return 0;
}
