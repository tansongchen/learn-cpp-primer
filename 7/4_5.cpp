#include <iostream>
using namespace std;

struct Person {
    string name;
    string address;
    string getName() const { return name; }
    string getAddress() const { return address; }
};

int main() {
    return 0;
}
