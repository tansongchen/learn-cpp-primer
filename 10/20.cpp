#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> v{"Hello", "world!"};
    cout << count_if(v.begin(), v.end(), [](string &s){ return s.size() > 5; }) << endl;
    return 0;
}
