#include <iostream>
#include <fstream>
#include <initializer_list>
#include <memory>
#include <vector>
using namespace std;

using Article = vector<string>;

class StrBlobPtr;
class ConstStrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;
public:
    using size_type = vector<string>::size_type;
    StrBlobPtr begin();
    StrBlobPtr end();
    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;
    StrBlob(): data(make_shared<Article>()) {}
    StrBlob(initializer_list<string> il): data(make_shared<Article>(il)) {}
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
    shared_ptr<Article> data;
    void check(size_type i, const string &msg) const { if (i >= data->size()) throw out_of_range(msg); }
};

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
    string &deref() const {
        auto p = check(curr, "deferefence past end");
        return (*p)[curr];
    }
    StrBlobPtr &incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    shared_ptr<Article> check(size_t i, const string &msg) const {
        auto ret = wptr.lock();
        if (!ret) throw runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) throw out_of_range(msg);
        return ret;
    }
    weak_ptr<Article> wptr;
    size_t curr;
};

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr(): curr(0) {}
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
    string &deref() const {
        auto p = check(curr, "deferefence past end");
        return (*p)[curr];
    }
    ConstStrBlobPtr &incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    shared_ptr<Article> check(size_t i, const string &msg) const {
        auto ret = wptr.lock();
        if (!ret) throw runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) throw out_of_range(msg);
        return ret;
    }
    weak_ptr<Article> wptr;
    size_t curr;
};

ConstStrBlobPtr StrBlob::begin() const { return ConstStrBlobPtr(*this); }
ConstStrBlobPtr StrBlob::end() const { return ConstStrBlobPtr(*this, data->size()); }

int main() {
    ifstream fin("12/20.in");
    StrBlob sb;
    string s;
    while (getline(fin, s)) {
        sb.push_back(s);
    }
    try {
        for (auto it = sb.begin(); ; it.incr()) {
            cout << it.deref() << endl;
        }
    } catch (out_of_range e) {}
    return 0;
}
