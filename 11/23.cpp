#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    multimap<string, string> families;
    families.insert({"Smith", "Jack"});
    families.insert({"Smith", "Bob"});
    return 0;
}
