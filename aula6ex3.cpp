#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> tarefas;
    int opcao;
    string texto;

    do {
        cout << "\n1-Inserir no inicio\n2-Inserir no final\n3-Remover por texto\n4-Listar\n5-Quantidade\n0-Sair\nOpcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Tarefa: ";
                getline(cin, texto);
                tarefas.push_front(texto);
                break;
            case 2:
                cout << "Tarefa: ";
                getline(cin, texto);
                tarefas.push_back(texto);
                break;
            case 3:
                cout << "Texto a remover: ";
                getline(cin, texto);
                {
                    size_t antes = tarefas.size();
                    tarefas.remove(texto);
                    if (tarefas.size() == antes) cout << "Tarefa nao encontrada." << endl;
                    else cout << "Removida(s): " << antes - tarefas.size() << endl;
                }
                break;
            case 4:
                if (tarefas.empty()) cout << "Nenhuma tarefa." << endl;
                else {
                    int i = 1;
                    for (const string& t : tarefas) cout << i++ << ". " << t << endl;
                }
                break;
            case 5:
                cout << "Quantidade: " << tarefas.size() << endl;
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