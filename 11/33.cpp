#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

map<string, string> buildMap(ifstream &fin1) {
    map<string, string> trans_map;
    string key, value;
    while (fin1 >> key && getline(fin1, value)) {
        if (value.size() > 1) trans_map[key] = value.substr(1);
    }
    return trans_map;
}

void word_transform(ifstream &fin1, ifstream &fin2) {
    auto m = buildMap(fin1);
    string line;
    while (getline(fin2, line)) {
        istringstream iss(line);
        string word;
        bool isfirst = true;
        while (iss >> word) {
            if (isfirst) isfirst = false;
            else cout << " ";
            auto it = m.find(word);
            if (it != m.end()) cout << it->second;
            else cout << word;
        }
        cout << endl;
    }
}

int main() {
    ifstream fin1("11/33_1.in"), fin2("11/33_2.in");
    word_transform(fin1, fin2);
    return 0;
}
