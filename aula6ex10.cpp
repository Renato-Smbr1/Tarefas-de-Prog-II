#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
    No(int v) : valor(v), proximo(nullptr) {}
};

class Fila {
private:
    No* inicio;
    No* fim;

public:
    Fila() : inicio(nullptr), fim(nullptr) {}

    ~Fila() {
        while (!vazia()) remover();
    }

    bool vazia() const { return inicio == nullptr; }

    void inserir(int valor) {
        No* novo = new No(valor);
        if (vazia()) inicio = fim = novo;
        else {
            fim->proximo = novo;
            fim = novo;
        }
    }

    void remover() {
        if (vazia()) {
            cout << "Fila vazia!" << endl;
            return;
        }
        No* temp = inicio;
        cout << "Removido: " << temp->valor << endl;
        inicio = inicio->proximo;
        if (inicio == nullptr) fim = nullptr;
        delete temp;
    }
};

int main() {
    Fila f;

    f.remover();
    f.inserir(1);
    f.inserir(2);
    f.inserir(3);
    f.remover();
    f.remover();
    f.remover();
    cout << "Vazia? " << (f.vazia() ? "sim" : "nao") << endl;

    return 0;
}