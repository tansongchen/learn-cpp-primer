#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string isbn;
    int amount;
    double income;
};

int main() {
    Sales_data s, s0;
    cin >> s.isbn >> s.amount >> s.income;
    while (cin >> s0.isbn >> s0.amount >> s0.income) {
        if (s0.isbn == s.isbn) {
            s.amount += s0.amount;
            s.income += s0.income;
        } else {
            cout << s.isbn << " " << s.amount << " " << s.income << endl;
            s.isbn = s0.isbn;
            s.amount = s0.amount;
            s.income = s0.income;
        }
    }
    cout << s.isbn << " " << s.amount << " " << s.income << endl;
    return 0;
}
