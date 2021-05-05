#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("49.in");
    string s, longest;
    while (fin >> s) if (s.find_first_of("bdfgjklpqty") == s.npos && s.size() > longest.size()) longest = s;
    cout << longest << endl;
    return 0;
}
