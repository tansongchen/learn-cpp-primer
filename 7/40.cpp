#include <iostream>
using namespace std;

class Date {
    unsigned year = 2021, month = 5, day = 2;
    Date() {}
    Date(unsigned _year, unsigned _month, unsigned _day): year(_year), month(_month), day(_day) {}
    Date(unsigned _month, unsigned _day): month(_month), day(_day) {}
    Date(unsigned _day): day(_day) {}
};

int main() {
    return 0;
}
