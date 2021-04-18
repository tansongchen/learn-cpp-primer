#include <iostream>
using namespace std;

int global_int;
string global_string;

int main() {
    int local_int;
    string local_string;

    cout << "gi:" << global_int << ",li:" << local_int << ",gs:" << global_string << ",ls:" << local_string << endl;
    return 0;
}
