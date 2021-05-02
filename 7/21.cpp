#include <iostream>
#include <string>
using namespace std;

class Sales_data {
    friend ostream &print(ostream &os, const Sales_data &item);
    friend istream &read(istream &is, Sales_data &item);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    public:
    Sales_data() = default;
    // Sales_data(const string &s): bookNo(s) {}
    Sales_data(const string &s): bookNo(s), units_sold(0), revenue(0.0) {}
    Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(istream &is) { read(is, *this); }
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
    double avg_price() const;
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
    return os;
}

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

int main() {
    Sales_data s(cin), s0;
    while (read(cin, s0)) {
        if (s0.isbn() == s.isbn()) {
            s = add(s, s0);
        } else {
            print(cout, s);
            s = s0;
        }
    }
    print(cout, s);
    return 0;
}
