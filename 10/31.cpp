#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<int> iit(cin), eof;
    vector<int> vi(iit, eof);
    sort(vi.begin(), vi.end());
    ostream_iterator<int> oit(cout, " ");
    unique_copy(vi.begin(), vi.end(), oit);
    return 0;
}
