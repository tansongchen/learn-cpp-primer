#include <iostream>
using namespace std;

class Sales_data {
    friend ostream &print(ostream &os, const Sales_data &item);
    friend istream &read(istream &is, Sales_data &item);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    public:
    Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(const string &s): Sales_data(s, 0, 0.0) {}
    Sales_data(): Sales_data("", 0, 0.0) {}
    Sales_data(istream &is): Sales_data() { read(is, *this); }
    string isbn() const { return bookNo; }
    Sales_data &combine(Sales_data &rhs) {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }
    double avg_price() const { return units_sold ? revenue / units_sold : 0; }
};

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
    Sales_data a;
    string s = "1";
    // a.combine(s); 改变一个临时变量的值是没什么意义的
    return 0;
}
