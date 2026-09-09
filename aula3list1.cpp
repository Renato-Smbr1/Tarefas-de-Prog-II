#include <iostream>

using namespace std;

int main () {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
    
    if (ano % 4 == 2) {
        cout << "Esse ano terá Copa" << endl;
    }
    else {
        cout << "Não terá Copa" << endl;
    }

    return 0;
}