#include <iostream>
#include <vector>
using namespace std;

class Example {
public:
    // static double rate = 6.5; // static 需要为 const
    static constexpr int vecSize = 20;
    static vector<double> vec; // 不是常量
};

// double Example::rate;
vector<double> Example::vec(vecSize);

int main() {
    return 0;
}
