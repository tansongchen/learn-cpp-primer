#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char a[] = "1", b[] = "2";
    vector<char *> roster1{a, b}, roster2{a, b};
    cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;
    return 0;
}
