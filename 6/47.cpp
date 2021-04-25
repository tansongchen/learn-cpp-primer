#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>::iterator b, vector<int>::iterator e) {
    if (b == e) {
        cout << endl;
        return;
    }
    cout << *b++ << " ";
    #ifndef NDEBUG
    cout << e - b << endl;
    #endif
    print(b, e);
}

int main() {
    vector<int> vi = {1, 2, 3};
    print(vi.begin(), vi.end());
}
