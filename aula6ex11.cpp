#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {
    No* inicio = nullptr;
    No* fim = nullptr;

    for (int i = 1; i <= 5; i++) {
        No* novo = new No;
        novo->valor = i * 10;
        novo->proximo = nullptr;

        if (inicio == nullptr) inicio = fim = novo;
        else {
            fim->proximo = novo;
            fim = novo;
        }
    }

    cout << "Lista: ";
    for (No* atual = inicio; atual != nullptr; atual = atual->proximo)
        cout << atual->valor << " -> ";
    cout << "nullptr" << endl;

    while (inicio != nullptr) {
        No* temp = inicio;
        inicio = inicio->proximo;
        delete temp;
    }
    fim = nullptr;

    return 0;
}