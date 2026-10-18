#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> editor;
    int opcao;
    string palavra;

    do {
        cout << "\n1-Digitar palavra\n2-Desfazer ultima\n3-Ver palavra do topo\n4-Demonstrar LIFO\n0-Sair\nOpcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Palavra: ";
                cin >> palavra;
                editor.push(palavra);
                break;
            case 2:
                if (editor.empty()) cout << "Nada para desfazer." << endl;
                else {
                    cout << "Desfeito: " << editor.top() << endl;
                    editor.pop();
                }
                break;
            case 3:
                if (editor.empty()) cout << "Editor vazio." << endl;
                else cout << "Topo: " << editor.top() << endl;
                break;
            case 4: {
                stack<string> demo;
                demo.push("um");
                demo.push("dois");
                demo.push("tres");
                cout << "Ordem de entrada: um, dois, tres" << endl;
                cout << "Ordem de saida: ";
                while (!demo.empty()) {
                    cout << demo.top() << " ";
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