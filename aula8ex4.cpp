#include <iostream>
using namespace std;

class Inteiro {
    int* p;
public:
    Inteiro(int v) : p(new int(v)) {}
    Inteiro(const Inteiro& o) : p(new int(*o.p)) {}
    Inteiro& operator=(const Inteiro& o) {
        if (this != &o) *p = *o.p;
        return *this;
    }
    ~Inteiro() { delete p; }
    void set(int v) { *p = v; }
    int get() const { return *p; }
};

int main() {
    Inteiro a(10);
    Inteiro b(a);
    b.set(99);
    cout << a.get() << ' ' << b.get() << '\n';
}