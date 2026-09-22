#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome; // se fosse char, iria ler apenas um caractere
    long long matricula; // o número da matrícula é grande: 202611722025, um int não serve
    double n1, n2, n3;
};

double calcularMedia(Aluno a) {
    return (a.n1 + a.n2 + a.n3) / 3.0;
}

int main() {
    Aluno aluno;


    cout << "Digite seu nome completo: ";
    getline(cin, aluno.nome); //getline lê o nome completo
    
    cout << "Digite o numero de sua matricula: ";
    cin >> aluno.matricula;
    
    cout << "Digite as tres notas (separadas por espaco): ";
    cin >> aluno.n1 >> aluno.n2 >> aluno.n3;
    
    double media = calcularMedia(aluno);
    
    cout << "\n==== Informações do Aluno ====" << endl;
    cout << "Nome do aluno: " << aluno.nome << endl;
    cout << "Numero de matricula: " << aluno.matricula << endl;
    cout << "Media: " << media << endl;

    return 0;
}