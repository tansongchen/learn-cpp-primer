#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string line, word;
    vector<string> vline, vword;
    ifstream fin("8/10.in");
    while (getline(fin, line)) vline.push_back(line);
    for (auto &item : vline) {
        istringstream sin(item);
        while (sin >> word) vword.push_back(word);
    }
    for (auto &item : vword) cout << item << endl;
    return 0;
}
