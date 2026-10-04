#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    int *ptr = numeros;

    cout << "--- Elementos e Enderecos de Memoria ---" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Elemento [" << i << "]: " << *(ptr + i)
             << " | Endereco: " << (ptr + i) << endl;
    }

    return 0;
}