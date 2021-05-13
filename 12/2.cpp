#include <iostream>
#include <initializer_list>
#include <memory>
#include <vector>
using namespace std;

class StrBlob {
public:
    using size_type = vector<string>::size_type;
    using article = vector<string>;
    StrBlob(): data(make_shared<article>()) {}
    StrBlob(initializer_list<string> il): data(make_shared<article>(il)) {}
    size_type size() const { return data->empty(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &s) { data->push_back(s); }
    void pop_back() {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }
    string &front() {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    string &back() {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    const string &front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const string &back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }
private:
    shared_ptr<article> data;
    void check(size_type i, const string &msg) const { if (i >= data->size()) throw out_of_range(msg); }
};

int main() {
    const StrBlob sb({"1", "2"});
    const string s = sb.front();
    return 0;
}
