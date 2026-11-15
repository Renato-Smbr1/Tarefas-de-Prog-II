#include <iostream>
#include <string>
using namespace std;

class Produto {
    const int codigo;
    string nome;
    double preco;
public:
    Produto(int c, const string& n, double p) : codigo(c), nome(n), preco(p) {}
    void exibir() const {
        cout << codigo << " - " << nome << " - R$ " << preco << '\n';
    }
};

int main() {
    Produto p(101, "Caneta", 2.5);
    p.exibir();
}