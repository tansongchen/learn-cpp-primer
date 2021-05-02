#include <iostream>
using namespace std;

class Date {
    unsigned year, month, day;
    Date(unsigned _year, unsigned _month, unsigned _day): year(_year), month(_month), day(_day) {}
    Date(): Date(2021, 5, 2) {}
    Date(unsigned _month, unsigned _day): Date(2021, _month, _day) {}
    Date(unsigned _day): Date(2021, 5, _day) {}
};

int main() {
    return 0;
}
