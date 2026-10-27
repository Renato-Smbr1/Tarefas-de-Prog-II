#include <iostream>
#include <string>
using namespace std;

class Produto {
private:
    int codigo;
    string descricao;
    double preco;
public:
    Produto(int c, string d, double p) : codigo(c), descricao(d), preco(p > 0 ? p : 1.0) {}
    int getCodigo() const { return codigo; }
    string getDescricao() const { return descricao; }
    double getPreco() const { return preco; }
    bool setPreco(double p) {
        if (p <= 0) return false;
        preco = p;
        return true;
    }
};

int main() {
    Produto p(10, "Teclado", 150.0);
    cout << p.getCodigo() << " - " << p.getDescricao() << " - R$ " << p.getPreco() << "\n";
    if (!p.setPreco(0)) cout << "Preco invalido\n";
    p.setPreco(180.0);
    cout << "Novo preco: R$ " << p.getPreco() << "\n";
    return 0;
}