#include <iostream>
using namespace std;

class Person {
    friend ostream &print(ostream &os, const Person &person);
    friend istream &read(istream &is, Person &person);
    string name;
    string address;
    public:
    string getName() const { return name; }
    string getAddress() const { return address; }
};

ostream &print(ostream &os, const Person &person) {
    os << person.getName() << " " << person.getAddress();
}

istream &read(istream &is, Person &person) {
    is >> person.name >> person.address;
}

int main() {
    return 0;
}
