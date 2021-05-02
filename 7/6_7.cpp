#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const { return units_sold ? revenue / units_sold : 0; }
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
}

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

int main() {
    Sales_data s, s0;
    read(cin, s);
    while (read(cin, s0)) {
        if (s0.bookNo == s.bookNo) {
            s = add(s, s0);
        } else {
            print(cout, s);
            s = s0;
        }
    }
    print(cout, s);
    return 0;
}
