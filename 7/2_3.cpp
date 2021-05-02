#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main() {
    Sales_data s, s0;
    cin >> s.bookNo >> s.units_sold >> s.revenue;
    while (cin >> s0.bookNo >> s0.units_sold >> s0.revenue) {
        if (s0.bookNo == s.bookNo) {
            s.units_sold += s0.units_sold;
            s.revenue += s0.revenue;
        } else {
            cout << s.bookNo << " " << s.units_sold << " " << s.revenue << endl;
            s.bookNo = s0.bookNo;
            s.units_sold = s0.units_sold;
            s.revenue = s0.revenue;
        }
    }
    cout << s.bookNo << " " << s.units_sold << " " << s.revenue << endl;
    return 0;
}
