#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int grade = 87;
    const vector<string> vs{"D", "C", "B", "A"};
    string letter = grade < 60 ? "F" : grade == 100 ? "A++" : vs[(grade - 60) / 10] + ((grade % 10 < 3) ? "-" : (grade % 10 > 7) ? "+" : "");
    cout << letter << endl;
    return 0;
}
