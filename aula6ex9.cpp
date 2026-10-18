#include <iostream>
using namespace std;

class Pilha {
private:
    static const int CAPACIDADE = 5;
    int dados[CAPACIDADE];
    int topo;

public:
    Pilha() : topo(-1) {}

    bool vazia() const { return topo == -1; }
    bool cheia() const { return topo == CAPACIDADE - 1; }

    void empilhar(int valor) {
        if (cheia()) {
            cout << "Pilha cheia! Nao foi possivel empilhar " << valor << endl;
            return;
        }
        dados[++topo] = valor;
    }

    void desempilhar() {
        if (vazia()) {
            cout << "Pilha vazia! Nada a desempilhar." << endl;
            return;
        }
        cout << "Desempilhado: " << dados[topo--] << endl;
    }

    void consultarTopo() const {
        if (vazia()) cout << "Pilha vazia!" << endl;
        else cout << "Topo: " << dados[topo] << endl;
    }
};

int main() {
    Pilha p;

    p.desempilhar();
    for (int i = 1; i <= 6; i++) p.empilhar(i * 10);
    p.consultarTopo();
    while (!p.vazia()) p.desempilhar();
    cout << "Vazia? " << (p.vazia() ? "sim" : "nao") << endl;

    return 0;
}