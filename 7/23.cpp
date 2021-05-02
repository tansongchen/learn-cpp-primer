#include <iostream>
using namespace std;

class Screen {
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {};
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const {
        pos row = r * width;
        return contents[row + c];
    }
    Screen &move(pos r, pos c) {
        pos row = r * width;
        cursor = row + c;
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

int main() {

    return 0;
}
