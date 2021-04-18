#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<unsigned> scores(11);
    unsigned grade;
    auto it = scores.begin();
    while (cin >> grade) {
        if (grade <= 100) {
            ++(*(it + (grade / 10)));
        }
    }
    for (; it != scores.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
