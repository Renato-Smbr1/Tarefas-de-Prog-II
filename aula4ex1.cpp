#include <iostream>
using namespace std;
struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data dataUsuario;

    cout << "Digite o dia: ";
    cin >> dataUsuario.dia;

    cout << "Digite o mes: ";
    cin >> dataUsuario.mes;

    cout << "Digite o ano: ";
    cin >> dataUsuario.ano;

    // Exibição dos valores armazenados
    cout << "\nData informada: " 
         << dataUsuario.dia << "/" 
         << dataUsuario.mes << "/" 
         << dataUsuario.ano << endl;

    return 0;
}
