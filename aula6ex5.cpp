#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> fila;
    int opcao;
    string doc;

    do {
        cout << "\n1-Adicionar documento\n2-Processar proximo\n3-Consultar proximo\n4-Fila vazia?\n5-Demonstrar FIFO\n0-Sair\nOpcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Documento: ";
                getline(cin, doc);
                fila.push(doc);
                break;
            case 2:
                if (fila.empty()) cout << "Nenhum documento para imprimir." << endl;
                else {
                    cout << "Imprimindo: " << fila.front() << endl;
                    fila.pop();
                }
                break;
            case 3:
                if (fila.empty()) cout << "Fila vazia." << endl;
                else cout << "Proximo: " << fila.front() << endl;
                break;
            case 4:
                cout << (fila.empty() ? "Sim, esta vazia." : "Nao, ha documentos aguardando.") << endl;
                break;
            case 5: {
                queue<string> demo;
                demo.push("Doc A");
                demo.push("Doc B");
                demo.push("Doc C");
                cout << "Ordem de entrada: Doc A, Doc B, Doc C" << endl;
                cout << "Ordem de saida: ";
                while (!demo.empty()) {
                    cout << demo.front() << " ";
                    demo.pop();
                }
                cout << endl;
                break;
            }
            case 0:
                cout << "Encerrando." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    } while (opcao != 0);

    return 0;
}