#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> vs;
    string s;
    ifstream fin("8/4.in");
    while (true) {
        getline(fin, s);
        if (fin) vs.push_back(s);
        else break;
    }
    for (auto &item : vs) cout << item << endl;
    return 0;
}
