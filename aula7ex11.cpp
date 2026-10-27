// Com atributos públicos:

class Aluno {
public:
    std::string nome;
    double nota;
};

// Versão Encapsulada:

#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    double nota;
public:
    Aluno(string n, double nt) : nome(n), nota(0) { setNota(nt); }
    string getNome() const { return nome; }
    double getNota() const { return nota; }
    bool setNota(double nt) {
        if (nt < 0 || nt > 10) return false;
        nota = nt;
        return true;
    }
};

int main() {
    Aluno a("Marcos", 8.5);
    cout << a.getNome() << ": " << a.getNota() << "\n";
    if (!a.setNota(15)) cout << "Nota invalida rejeitada\n";
    cout << a.getNome() << ": " << a.getNota() << "\n";
    return 0;
}

/*
Versão pública: qualquer parte do programa pode fazer a.nota = 999; 
a.nota = -3; e o objeto fica em estado inválido sem que a classe perceba.

Versão Encapsulada: a única porta de entrada é setNota, que concentra a regra (nota entre 0 e 10). 
Isso garante a integridade dos dados: o objeto nunca fica inválido. 
Além disso, a implementação interna pode mudar sem quebrar o código que usa a classe, 
e a regra de validação fica em um só lugar, facilitando manutenção e correção 
de erros.





*/