#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {}

void Pessoa::apresentar() const {
    cout << "Ola, meu nome e " << nome << " e tenho " << idade << " anos.\n";
}