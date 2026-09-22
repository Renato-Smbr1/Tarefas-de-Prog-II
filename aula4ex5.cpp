#include <iostream>
using namespace std;

int calculaQuadrado(int num) {
    return num * num;
}

double calculaQuadrado(double num) {
    return num * num;
}

int main() {
    int valorInt;
    double valorDec;

    cout << "Digite um número inteiro: ";
    cin >> valorInt;
    
    cout << "O quadrado de " << valorInt << " (int) é igual a: " 
         << calculaQuadrado(valorInt) << endl;

    cout << "\n================================" << endl;

    cout << "Digite um número decimal (ex: 4.5): ";
    cin >> valorDec;
    
    cout << "O quadrado de " << valorDec << " (double) é igual a: " 
         << calculaQuadrado(valorDec) << endl;

    return 0;
}