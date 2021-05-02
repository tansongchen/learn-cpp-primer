#include <iostream>
using namespace std;

class Sales_data {
    friend ostream &print(ostream &os, const Sales_data &item);
    friend istream &read(istream &is, Sales_data &item);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    public:
    Sales_data(const string &s): bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(istream &is = cin) { read(is, *this); }
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
    double avg_price() const { return units_sold ? revenue / units_sold : 0; }
};

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

Sales_data first_item(cin); // Sales_data(istream &is)

int main() {
    Sales_data next; // Sales_data(const string &s = "")
    Sales_data last("9-999-99999-9"); // Sales_data(const string &s = "")
    return 0;
}
