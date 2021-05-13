#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) { cout << ptr.use_count() << endl; } // 2

int main() {
    shared_ptr<int> p(new int (42));
    cout << p.use_count() << endl; // 1
    process(shared_ptr<int>(p));
    cout << p.use_count() << endl; // 1
    return 0;
}
