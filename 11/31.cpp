#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, string> m = {{"Alice", "Book 3"}, {"Bob", "Book2"}, {"Alice", "Book 1"}};
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
