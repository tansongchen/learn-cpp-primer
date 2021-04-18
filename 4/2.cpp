#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3};
    cout << *vec.begin() << endl;
    cout << *(vec.begin()) << endl;
    cout << *vec.begin() + 1 << endl;
    cout << *(vec.begin() + 1) << endl;
    return 0;
}
