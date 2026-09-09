#include <iostream>
#include <iomanip> // Para formatar o número com 2 casas decimais. Descobri como usar aqui

using namespace std;

int main() {
    double salario, salarioReajustado, aumento;

    cout << "Digite o salario atual do funcionario: R$ ";
    cin >> salario;

    if (salario < 3000.0) {
        aumento = salario * 0.50; 
    } 
    else if (salario <= 10000.0) {
        aumento = salario * 0.20; 
    } 
    else {
        aumento = salario * 0.15;
    }

    salarioReajustado = salario + aumento;

    // Configuração para exibir sempre 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salário: R$ " << salarioReajustado << endl;

    return 0;
}