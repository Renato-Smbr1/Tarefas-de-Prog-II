#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <utility>
using namespace std;

class Buffer {
    size_t tam;
    int* dados;
public:
    explicit Buffer(size_t t = 0, int valor = 0)
        : tam(t), dados(t ? new int[t] : nullptr) {
        for (size_t i = 0; i < tam; i++) dados[i] = valor;
    }
    Buffer(const Buffer& o)
        : tam(o.tam), dados(o.tam ? new int[o.tam] : nullptr) {
        copy(o.dados, o.dados + tam, dados);
    }
    Buffer(Buffer&& o) noexcept : tam(o.tam), dados(o.dados) {
        o.tam = 0;
        o.dados = nullptr;
    }
    Buffer& operator=(const Buffer& o) {
        if (this != &o) {
            Buffer tmp(o);
            swap(tam, tmp.tam);
            swap(dados, tmp.dados);
        }
        return *this;
    }
    Buffer& operator=(Buffer&& o) noexcept {
        if (this != &o) {
            delete[] dados;
            tam = o.tam;
            dados = o.dados;
            o.tam = 0;
            o.dados = nullptr;
        }
        return *this;
    }
    ~Buffer() { delete[] dados; }

    Buffer operator+(const Buffer& o) const {
        if (tam != o.tam)
            throw invalid_argument("Buffers de tamanhos diferentes");
        Buffer r(tam);
        for (size_t i = 0; i < tam; i++) r.dados[i] = dados[i] + o.dados[i];
        return r;
    }
    int& operator[](size_t i) { return dados[i]; }
    const int& operator[](size_t i) const { return dados[i]; }
    size_t tamanho() const { return tam; }
};

void imprimir(const char* nome, const Buffer& b) {
    cout << nome << ": ";
    for (size_t i = 0; i < b.tamanho(); i++) cout << b[i] << ' ';
    cout << '\n';
}

int main() {
    Buffer a(4, 1), b(4, 2);
    a[3] = 10;

    Buffer soma = a + b;
    imprimir("a", a);
    imprimir("b", b);
    imprimir("a+b", soma);

    Buffer copia(a);
    copia[0] = 100;
    imprimir("a (original)", a);
    imprimir("copia", copia);

    Buffer movido(std::move(copia));
    cout << "copia apos mover, tamanho: " << copia.tamanho() << '\n';
    imprimir("movido", movido);

    Buffer c(3, 7);
    try {
        Buffer erro = a + c;
    } catch (const invalid_argument& e) {
        cout << "Erro: " << e.what() << '\n';
    }
}