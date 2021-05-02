#include <iostream>
using namespace std;

struct Person {
    Person(string _name, string _address): name(_name), address(_address) {}
    string name;
    string address;
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
