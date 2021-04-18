#include <iostream>
using namespace std;

int main() {
    int grade = 80;
    cout << (
        grade >= 90 ? "high pass" :
            grade >= 75 ? "pass" :
                grade >= 60 ? "low pass" : "fail"
    ) << endl;
    if (grade >= 90) cout << "high pass";
    else if (grade >= 75) cout << "pass";
    else if (grade >= 60) cout << "low pass";
    else cout << "fail";
    cout << endl;
    return 0;
}
