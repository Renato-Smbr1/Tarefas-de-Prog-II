#include <iostream>
using namespace std;

int main() {
    int quant;

    cout << "Digite a quantidade inicial de elementos: ";
    cin >> quant;

    if (quant <= 0) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    double* valores = new double[quant]; // --> ponteiro

    cout << "\nDigite os " << quant << " valores:" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> valores[i];
    }

    double novoValor;
    cout << "\nDigite um novo valor para inserir ao final: ";
    cin >> novoValor;

    int novaQuant = quant + 1;
    double* novoArray = new double[novaQuant];

    // Copia os elementos do array antigo para o novo array
    for (int i = 0; i < quant; i++) {
        novoArray[i] = valores[i];
    }


    novoArray[quant] = novoValor;

    // Libera o array antigo com delete[]
    delete[] valores;

    // Atualiza o ponteiro principal para apontar para o novo array
    valores = novoArray;
    quant = novaQuant; // Atualiza o tamanho atual


    cout << "\n--- Array Final Atualizado ---" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Elemento " << (i + 1) << ": " << valores[i] << endl;
    }


    delete[] valores;
    valores = nullptr;

    return 0;
}