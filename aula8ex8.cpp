#include <iostream>
using namespace std;

class Contador {
    int valor;
public:
    explicit Contador(int v = 1) : valor(v > 0 ? v : 1) {}
    Contador& operator++() {
        ++valor;
        return *this;
    }
    Contador operator++(int) {
        Contador antigo(*this);
        ++valor;
        return antigo;
    }
    int get() const { return valor; }
};

int main() {
    Contador c(5);

    cout << "Antes: " << c.get() << '\n';
    Contador r1 = ++c;
    cout << "++c -> retorno: " << r1.get() << ", c: " << c.get() << '\n';

    cout << "Antes: " << c.get() << '\n';
    Contador r2 = c++;
    cout << "c++ -> retorno: " << r2.get() << ", c: " << c.get() << '\n';
}