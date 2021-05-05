#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    ifstream fin("10/29.in");
    istream_iterator<string> iit(fin), eof;
    vector<string> vs(iit, eof);
    for (auto &item : vs) cout << item << endl;
    return 0;
}
