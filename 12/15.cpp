#include <iostream>
#include <memory>
using namespace std;

struct destination {};
struct connection {};
connection connect(destination *) { connection c; return c; }
void disconnect(connection) {}
void f(destination &d) {
    connection c = connect(&d);
    shared_ptr<connection> p(&c, [](connection *p){ disconnect(*p); });
}

int main() {
    return 0;
}
