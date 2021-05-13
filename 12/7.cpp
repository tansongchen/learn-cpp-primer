#include <iostream>
#include <vector>
#include <memory>
using namespace std;

using Array = vector<int>;
using PArray = shared_ptr<Array>;

PArray factory() { return make_shared<Array>(); }

PArray &reader(PArray &array) {
    int i;
    while (cin >> i) array->push_back(i);
    return array;
}

void printer(PArray &array) {
    for (auto item : *array) cout << item << endl;
}

int main() {
    PArray array = factory();
    printer(reader(array));
    return 0;
}
