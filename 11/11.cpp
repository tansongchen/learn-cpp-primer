#include <iostream>
#include <set>
using namespace std;

class Sales_data {
    string bookNo;
    public:
    string isbn() const { return bookNo; }
};

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    multiset<Sales_data, bool (*)(const Sales_data &lhs, const Sales_data &rhs)> bookstore;
    return 0;
}
