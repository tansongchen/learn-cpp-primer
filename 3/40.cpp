#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char s[] = "Hello, ", t[] = "world!";
    char u[14];
    strcpy(u, s);
    strcat(u, t);
    string v = u;
    cout << u << endl;
    return 0;
}
