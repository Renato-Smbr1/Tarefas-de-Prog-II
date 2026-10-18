#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main() {
    list<string> lista;
    queue<string> fila;
    stack<string> pilha;

    cout << "=== LISTA (std::list) ===\n";
    lista.push_back("B");
    lista.push_back("C");
    lista.push_front("A");
    cout << "Inseriu A (inicio), B e C (fim): ";
    for (const auto& x : lista) cout << x << " ";
    cout << "\n";

    lista.remove("B");
    cout << "Removeu B (do meio): ";
    for (const auto& x : lista) cout << x << " ";
    cout << "\n";
    cout << "Regra de ordem: nenhuma (acesso livre)\n";
    cout << "Aplicacao: gerenciador de tarefas, playlist\n\n";

    cout << "=== FILA (std::queue) ===\n";
    fila.push("1o");
    fila.push("2o");
    fila.push("3o");
    cout << "Entrada: 1o, 2o, 3o\n";
    cout << "Saida:   ";
    while (!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop();
    }
    cout << "\n";
    cout << "Regra de ordem: FIFO (primeiro a entrar, primeiro a sair)\n";
    cout << "Aplicacao: fila de impressao, fila de atendimento\n\n";

    cout << "=== PILHA (std::stack) ===\n";
    pilha.push("1o");
    pilha.push("2o");
    pilha.push("3o");
    cout << "Entrada: 1o, 2o, 3o\n";
    cout << "Saida:   ";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << "\n";
    cout << "Regra de ordem: LIFO (ultimo a entrar, primeiro a sair)\n";
    cout << "Aplicacao: desfazer em editores, historico de navegacao\n";
}