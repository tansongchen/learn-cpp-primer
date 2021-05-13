#include <iostream>
#include <vector>
using namespace std;

using Array = vector<int>;

Array *factory() { return new Array; }

Array *&reader(Array *&array) {
    int i;
    while (cin >> i) array->push_back(i);
    return array;
}

void printer(Array *&array) {
    for (auto item : *array) cout << item << endl;
}

int main() {
    Array *array = factory();
    printer(reader(array));
    delete array;
    return 0;
}
