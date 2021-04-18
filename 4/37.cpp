#include <iostream>
#include <string>
using namespace std;

int main() {
    char c = 'c';
    int i; double d; const string *ps; char *pc = &c; void *pv;
    pv = (void *) ps;
    pv = reinterpret_cast<void *>(const_cast<string *>(ps));
    i = int(*pc);
    i = static_cast<int>(*pc);
    pv = &d;
    pv = static_cast<void *>(&d);
    pc = (char *) pv;
    pc = reinterpret_cast<char *>(pv);
    return 0;
}
