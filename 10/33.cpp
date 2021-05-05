#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;

int main(int argc, char **argv) {
    ifstream fin(argv[1]);
    ofstream fout1(argv[2]), fout2(argv[3]);
    istream_iterator<int> iit(fin), eof;
    ostream_iterator<int> oit1(fout1, " "), oit2(fout2, "\n");
    for (; iit != eof; ++iit) {
        if (*iit % 2) oit1 = *iit;
        else oit2 = *iit;
    }
    return 0;
}
