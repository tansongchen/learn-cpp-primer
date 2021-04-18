#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int grade = 87;
    const vector<string> vs{"D", "C", "B", "A"};
    string letter;
    if (grade < 60) letter = "F";
    else if (grade == 100) letter = "A++";
    else {
        letter = vs[(grade - 60) / 10];
        if (grade % 10 < 3) letter += "-";
        else if (grade % 10 > 7) letter += "+";
        else;
    }
    cout << letter << endl;
    return 0;
}
