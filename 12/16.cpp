#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> u1, u2 = u1;
    return 0;
}
