#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

class StringSegura {
    char* dados = nullptr;
    size_t tam = 0;
public:
    StringSegura() = default;
    StringSegura(const char* s) : tam(strlen(s)) {
        dados = new char[tam + 1];
        memcpy(dados, s, tam + 1);
    }
    StringSegura(const StringSegura& o) : tam(o.tam) {
        if (o.dados) {
            dados = new char[tam + 1];
            memcpy(dados, o.dados, tam + 1);
        }
    }
    StringSegura& operator=(const StringSegura&) = delete;
    StringSegura(StringSegura&& o) noexcept : dados(o.dados), tam(o.tam) {
        o.dados = nullptr;
        o.tam = 0;
    }
    StringSegura& operator=(StringSegura&& o) noexcept {
        if (this != &o) {
            delete[] dados;
            dados = o.dados;
            tam = o.tam;
            o.dados = nullptr;
            o.tam = 0;
        }
        return *this;
    }
    ~StringSegura() { delete[] dados; }
    const char* c_str() const { return dados ? dados : ""; }
    size_t tamanho() const { return tam; }
};

int main() {
    StringSegura a("ola");
    StringSegura b(a);
    StringSegura c = std::move(a);
    StringSegura d;
    d = std::move(b);

    cout << "a: '" << a.c_str() << "'\n";
    cout << "b: '" << b.c_str() << "'\n";
    cout << "c: '" << c.c_str() << "'\n";
    cout << "d: '" << d.c_str() << "'\n";
}