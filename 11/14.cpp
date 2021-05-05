#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

struct Date {
    unsigned year, month, day;
};

int main() {
    map<string, vector<pair<string, Date>>> families;
    families["Smith"];
    families["Smith"].push_back({"Jack", {1, 1, 1}});
    return 0;
}
