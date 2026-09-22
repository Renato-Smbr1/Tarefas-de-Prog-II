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

    double* valores = new double[quant];

    cout << "\nDigite os " << quant << " valores:" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> valores[i];
    }

    // MODIFICAÇÃO
    int posicaoRemover;
    cout << "\nDigite o número do elemento que deseja remover (1 a " << quant << "): ";
    cin >> posicaoRemover;


    if (posicaoRemover < 1 || posicaoRemover > quant) {
        cout << "Posição Inválida" << endl;
        delete[] valores; // Evita vazamento antes de sair
        return 1;
    }

    // Convertendo para o índice do C++ (que começa em 0)
    int indiceRemover = posicaoRemover - 1;

    // Cria um array com uma posição a menos
    int novaQuant = quant - 1;
    double* novoArray = new double[novaQuant];

    // Copia os elementos pulando o que vai ser removido
    int j = 0; //--> Índice controlador do novo array
    for (int i = 0; i < quant; i++) {
        if (i == indiceRemover) {
            continue; // Pula o elemento que queremos apagar
        }
        novoArray[j] = valores[i];
        j++; // Avança apenas se copiou
    }

    delete[] valores; // --> Libera o array antigo

    // Atualiza o ponteiro e a quantidade
    valores = novoArray;
    quant = novaQuant;

    cout << "\n--- Array Final Apos a Remocao ---" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Elemento " << (i + 1) << ": " << valores[i] << endl;
    }

    delete[] valores;
    valores = nullptr;

    return 0;
}