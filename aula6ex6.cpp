#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> fila;
    int opcao;
    string nome;

    do {
        cout << "\n1-Adicionar pessoa\n2-Chamar proxima\n3-Quantas aguardam\n0-Sair\nOpcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Nome: ";
                getline(cin, nome);
                fila.push(nome);
                cout << nome << " entrou na fila." << endl;
                break;
            case 2:
                if (fila.empty()) cout << "Ninguem na fila." << endl;
                else {
                    cout << "Chamando: " << fila.front() << endl;
                    fila.pop();
                }
                break;
            case 3:
                cout << "Aguardando: " << fila.size() << endl;
                break;
            case 0:
                cout << "Encerrando." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    } while (opcao != 0);

    return 0;
}