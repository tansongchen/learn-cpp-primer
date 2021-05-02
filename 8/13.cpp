#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(string phone) { return all_of(phone.begin(), phone.end(), [](char &c){ return '0' <= c && c <= '9'; }); }
string format(string phone) { return "Phone: " + phone; }

int main() {
    ifstream fin("8/13.in");
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(fin, line)) {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
        record.clear();
    }
    for (const auto &person : people) {
        ostringstream formatted, badNums;
        for (const auto &phone : person.phones) {
            if (!valid(phone)) badNums << " " << phone;
            else formatted << " " << format(phone);
        }
        if (badNums.str().empty()) cout << person.name << " " << formatted.str() << endl;
        else cerr << "input error: " << person.name << " invalid number(s) " << badNums.str() << endl;
    }
    return 0;
}
