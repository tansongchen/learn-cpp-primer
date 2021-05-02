#include <iostream>
#include <vector>
using namespace std;

class Screen;

class Window_mgr {
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    vector<Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {};
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {};
    pos size() const;
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

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

Screen::pos Screen::size() const {
    return height * width;
}

int main() {
    return 0;
}
