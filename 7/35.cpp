#include <iostream>
using namespace std;

typedef string T;
T initval(); // T = string

class Exercise {
public:
    typedef double T;
    T setVal(T); // T = double
    T initval(); // T = double
private:
    int val;
};

// T Exercise::setVal(T parm) { // 1st string, 2nd double
//     val = parm + initval(); // returns double
//     return val;
// }

Exercise::T Exercise::setVal(T parm) {
    val = parm + initval();
    return val;
}

int main() {
    return 0;
}
