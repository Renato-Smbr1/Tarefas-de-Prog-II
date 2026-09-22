#include <iostream>
using namespace std;

inline double converteParaReais(double dolares, double cotacao) {
    return dolares * cotacao;
}

int main() {
    double quantiaDol, cotacaoDol;

    cout << "Digite a quantia em dolares (US$): ";
    cin >> quantiaDol;

    cout << "Digite a cotacao do dolar em reais (R$): ";
    cin >> cotacaoDol;

    double valorReais = converteParaReais(quantiaDol, cotacaoDol);

    cout << "O valor equivalente em reais eh: R$ " << valorReais << endl;

    return 0;
}