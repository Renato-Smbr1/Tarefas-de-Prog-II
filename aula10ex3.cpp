#include <iostream>
#include <string>
using namespace std;

class Funcionario {
public:
    string nome;
    Funcionario(string n, double s, string d)
        : nome(n), salario(s), documento(d) {}
    string getDocumento() const { return documento; }
protected:
    double salario;
private:
    string documento;
};

class Gerente : public Funcionario {
public:
    Gerente(string n, double s, string d) : Funcionario(n, s, d) {}
    void exibir() const {
        cout << "Nome (public): " << nome << endl;
        cout << "Salario (protected): " << salario << endl;
        cout << "Documento (via getter publico): " << getDocumento() << endl;
    }
};

int main() {
    Gerente g("Ana", 9500.0, "123.456.789-00");
    g.exibir();
    cout << "Acesso externo ao nome: " << g.nome << endl;

#ifdef TESTE_ERRO
    cout << g.salario << endl;
    cout << g.documento << endl;
#endif

    return 0;
}