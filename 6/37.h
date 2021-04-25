#include <iostream>
using namespace std;

string s[10];

string (&f1())[10];
using Paragraph = string[10];
Paragraph &f2();
auto f3() -> string (&)[10];
decltype(s) &f4();
