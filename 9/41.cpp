#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vc = {'a', 'p', 'p', 'l', 'e'};
    string s(vc.begin(), vc.end());
    cout << s << endl;
    return 0;
}
