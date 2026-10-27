#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string n, int i) : nome(n), idade(0) { setIdade(i); }
    string getNome() const { return nome; }
    int getIdade() const { return idade; }
    bool setIdade(int i) {
        if (i < 0) return false;
        idade = i;
        return true;
    }
    void exibir() const {
        cout << nome << " - " << idade << " anos\n";
    }
};

int main() {
    vector<Pessoa> pessoas;
    pessoas.push_back(Pessoa("Ana", 25));
    pessoas.push_back(Pessoa("Bruno", 31));
    pessoas.push_back(Pessoa("Carla", -5));
    pessoas.push_back(Pessoa("Diego", 42));
    for (const Pessoa& p : pessoas) p.exibir();
    if (!pessoas[0].setIdade(-1)) cout << "Idade invalida rejeitada\n";
    return 0;
}