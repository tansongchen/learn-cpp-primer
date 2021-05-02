#include <iostream>
using namespace std;

class Screen {
public:
    typedef string::size_type pos;
    void dummy_fcn(pos height) {
        cursor = width * height;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
};

int main() {

    return 0;
}
