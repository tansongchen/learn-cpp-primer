#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
    map<string, size_t> word_count;
    map<string, size_t>::const_iterator map_it = word_count.cbegin();
    return 0;
}
