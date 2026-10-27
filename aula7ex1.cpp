#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;
public:
    Gato(string n, int i, double p) : nome(n), idade(i), peso(1.0) {
        setPeso(p);
    }
    void setPeso(double p) {
        if (p > 0) peso = p;
        else cout << "Peso invalido, valor mantido.\n";
    }
    string getNome() const { return nome; }
    int getIdade() const { return idade; }
    double getPeso() const { return peso; }
};

int main() {
    Gato g("Mimi", 3, 4.5);
    cout << g.getNome() << ", " << g.getIdade() << " anos, " << g.getPeso() << " kg\n";
    g.setPeso(-2);
    g.setPeso(5.0);
    cout << "Novo peso: " << g.getPeso() << " kg\n";
    return 0;
}