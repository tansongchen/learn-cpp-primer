#include <iostream>
using namespace std;

class Person {
    friend istream &read(istream &is, Person &person);
private:
    string name;
    string address;
public:
    Person(): name(), address() {}
    Person(string _name): name(_name), address() {}
    Person(string _name, string _address): name(_name), address(_address) {}
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
