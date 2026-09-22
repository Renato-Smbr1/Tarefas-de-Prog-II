#include <iostream>
using namespace std;

int main() {
    int quant;

    cout << "Digite a quantidade de elementos: ";
    cin >> quant;

    if (quant <= 0) {
        cout << "Quantidade inválida" << endl;
        return 1;
    }

    double* valores = new double[quant]; //--> ponteiro (*)
    double soma = 0.0;


    cout << "\nDigite os " << quant << " valores:" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Elemento " << (i + 1) << ": "; 
        cin >> valores[i];
        
        // Esse 'for' é MUITO bom, porque ele ajuda a deixar mais bonito visualmente pro usuário
        

        soma += valores[i];
    }


    double media = soma / quant;

    cout << "\n--- Resultados ---" << endl;
    cout << "Soma total: " << soma << endl;
    cout << "Media: " << media << endl;

    // Libera a memória alocada com delete[] 
    delete[] valores;

    // Zerar o ponteiro após deletar para evitar acessos acidentais
    valores = nullptr; 

    return 0;
}