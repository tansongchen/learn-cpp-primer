#include <iostream>
using namespace std;

class Screen {
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {};
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
    Screen &set(char c) {
        contents[cursor] = c;
        return *this;
    }
    Screen &set(pos r, pos col, char ch) {
        contents[r * width + col] = ch;
        return *this;
    }
    Screen &display(ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const {
        do_display(os);
        return *this;
    }
private:
    void do_display(ostream &os) const { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

int main() {
    Screen screen(5, 5, 'X');
    screen.move(4,0).set('#').display(cout);
    cout << "\n";
    screen.display(cout);
    cout << "\n";
    return 0;
}
