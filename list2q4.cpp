#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int idade;
    float nota;

    cout << "Digite o nome completo do aluno: ";
    getline(cin, nome); // lê toda a linha digitada pelo usuário.

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a nota final: ";
    cin >> nota;

    string notaStr = to_string(nota); // conversão de float pra string

    cout << "\nDados Confirmados" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Nota Final convertida: " << notaStr << endl;

    return 0;
}