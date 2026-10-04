#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cout << "Digite a quantidade N de elementos: ";
    cin >> n;

    if (n <= 0) {
        cout << "A quantidade de elementos deve ser maior que zero." << endl;
        return 1;
    }

    int *vetor = new int[n];

    cout << "\n--- Digite os " << n << " valores inteiros ---" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento [" << i << "]: ";
        cin >> vetor[i];
    }

    int maior = vetor[0];
    for (int i = 1; i < n; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    cout << "\nO maior valor presente no vetor e: " << maior << endl;

    delete[] vetor;
    vetor = nullptr;

    return 0;
}