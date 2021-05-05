#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<string, vector<string>> families;
    families["Smith"] = vector<string>();
    families["Smith"].push_back("Jack");
    return 0;
}
