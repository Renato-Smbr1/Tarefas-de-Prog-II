#include <iostream>
using namespace std;

int somar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int x = 10;
    int y = 5;

    int (*operacao)(int, int);

    operacao = somar;
    cout << "Resultado da Soma (" << x << " + " << y << "): " << operacao(x, y) << endl;

    operacao = multiplicar;
    cout << "Resultado da Multiplicacao (" << x << " * " << y << "): " << operacao(x, y) << endl;

    return 0;
}