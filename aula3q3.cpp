#include <iostream>

using namespace std;

int main() {
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    switch (idade) {
        case 0 ... 1:
            cout << "O usuário tem a idade de um bebê =D" << endl;
            break;
        case 2 ... 10:
            cout << "O usuário tem a idade de uma criança" << endl;
            break;
        case 11 ... 17:
            cout << "O usuário tem a idade de um adolescente" << endl;
            break;
        case 18 ... 64:
            cout << "O usuário tem a idade de um adulto" << endl;
            break;
        case 65 ... 100:
            cout << "O usuário tem a idade de um idoso" << endl;
            break;
        default:
            cout << "O usuário digitou uma idade mentirosa." << endl;
            break;
    }

    return 0;
}