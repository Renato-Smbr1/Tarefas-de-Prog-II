#include <iostream>
#include <string>
using namespace std;

class Registro {
    string nome;
public:
    explicit Registro(const string& n) : nome(n) { cout << "Criado: " << nome << '\n'; }
    ~Registro() { cout << "Destruido: " << nome << '\n'; }
};

void funcao() {
    Registro c("C (funcao)");
    cout << "Dentro da funcao\n";
}

int main() {
    Registro a("A (main)");
    {
        Registro b("B (bloco)");
        cout << "Dentro do bloco\n";
    }
    funcao();
    cout << "Fim do main\n";
}