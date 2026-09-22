#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2;

    cout << "Digite o primeiro número: ";
    cin >> n1;

    cout << "Digite o segundo número: ";
    cin >> n2;

    int resultado = soma(n1, n2);
    cout << "A soma é: " << resultado << endl;

    return 0;
}