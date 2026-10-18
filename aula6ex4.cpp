#include <iostream>
#include <list>
using namespace std;

void exibir(const list<int>& l) {
    if (l.empty()) {
        cout << "Lista vazia." << endl;
        return;
    }
    cout << "Lista: ";
    for (int v : l) cout << v << " ";
    cout << endl;
}

int main() {
    list<int> lista;
    int opcao, valor;

    do {
        cout << "\n1-Inserir\n2-Remover primeiro\n3-Remover ultimo\n4-Remover todas as ocorrencias de um valor\n5-Exibir\n0-Sair\nOpcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                lista.push_back(valor);
                break;
            case 2:
                if (lista.empty()) cout << "Lista vazia, nada a remover." << endl;
                else lista.pop_front();
                exibir(lista);
                break;
            case 3:
                if (lista.empty()) cout << "Lista vazia, nada a remover." << endl;
                else lista.pop_back();
                exibir(lista);
                break;
            case 4:
                if (lista.empty()) cout << "Lista vazia, nada a remover." << endl;
                else {
                    cout << "Valor a remover: ";
                    cin >> valor;
                    lista.remove(valor);
                    exibir(lista);
                }
                break;
            case 5:
                exibir(lista);
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