#include <iostream>
using namespace std;

int main() {
    const int TAMANHO_MAX = 100;
    double a[TAMANHO_MAX];
    int n = 0;

    cout << "Quantos valores deseja digitar (no maximo 100)? ";
    cin >> n;

    if (n <= 0 || n > TAMANHO_MAX) {
        cout << "Quantidade invalida. O programa sera encerrado." << endl;
        return 1;
    }

    cout << "\n--- Leitura dos Dados ---" << endl;
    for (int j = 0; j < n; ++j) {
        cout << "Digite o valor [" << j + 1 << "]: ";
        cin >> *(a + j);
    }

    double soma = 0.0;
    double *aPtr = a; 

    for (int j = 0; j < n; ++j) {
        soma += *(aPtr + j);
    }

    double media = soma / n;

    cout << "\n--- Resultados ---" << endl;
    cout << "Soma total: " << soma << endl;
    cout << "Media aritmetica: " << media << endl;

    return 0;
}