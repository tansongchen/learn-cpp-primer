#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> vs{"1", "2", "3"};
    int sumi = 0;
    for (auto &item : vs) sumi += stoi(item);
    vector<string> vd{"1.1", "2.2", "3.3"};
    double sumd = 0;
    for (auto &item : vd) sumd += stod(item);
    cout << sumi << " " << sumd << endl;
    return 0;
}
