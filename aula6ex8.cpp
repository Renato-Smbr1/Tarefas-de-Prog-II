#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string frase, palavra;
    stack<string> pilha;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    istringstream ss(frase);
    while (ss >> palavra) pilha.push(palavra);

    cout << "Frase invertida: ";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;

    return 0;
}