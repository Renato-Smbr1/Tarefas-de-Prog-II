#include <iostream>
using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    cout << "--- Cadastro de Despesas ---" << endl;

    //Linhas
    for (int i = 0; i < ANO; i++) { //--> Só cresce até 2 anos, pois é o limite
    
        cout << "\n-- Ano " << (i + 1) << " --" << endl;
        
        //Colunas
        for (int j = 0; j < TRIMESTRE; j++) { // --> só cresce até 4 trimestres, pois é o limite
            cout << "Digite a despesa do " << (j + 1) << "o trimestre: ";
            cin >> despesas[i][j];
        }
    }

    //Tabela
    cout << "\n\n=== Tabela de Despesas ===" << endl;
    cout << "Ano\tTrim 1\tTrim 2\tTrim 3\tTrim 4" << endl;

    for (int i = 0; i < ANO; i++) {
        cout << "Ano " << (i + 1) << "\t";
        
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "R$" << despesas[i][j] << "\t";
            
            totalGeral += despesas[i][j];
        }
        cout << endl; // Pula para a próxima linha da tabela
    }


    cout << "\nTotal geral das despesas: R$" << totalGeral << endl;

    return 0;
}