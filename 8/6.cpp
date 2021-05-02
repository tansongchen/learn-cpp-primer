#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Sales_data {
    string isbn;
    int amount;
    double income;
};

int main(int argc, char **argv) {
    ifstream fin(argv[1]);
    Sales_data s, s0;
    fin >> s.isbn >> s.amount >> s.income;
    while (fin >> s0.isbn >> s0.amount >> s0.income) {
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
