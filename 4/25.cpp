#include <iostream>
#include <bitset>
using namespace std;

int main() {
    char q = 'q';
    // q 首先提升为 0000 0000 0000 0000 0000 0000 0111 0001
    // 然后取反得到 1111 1111 1111 1111 1111 1111 1000 1110
    // 然后左移得到 1111 1111 1111 1111 1110 0011 1000 0000
    int i = ~'q' << 6;
    bitset<32> bi(i);
    cout << bi << endl;
    return 0;
}
