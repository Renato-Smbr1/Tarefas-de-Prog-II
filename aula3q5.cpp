#include <iostream>

using namespace std;

int fat(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return n * fat(n - 1);
    }
}

int main () {
    int n;
    cout << "Digite um número: ";
    cin >> n;
    
    cout << "O fatorial de " << n << " é igual a " << fat(n) << endl;
    
    return 0;
}