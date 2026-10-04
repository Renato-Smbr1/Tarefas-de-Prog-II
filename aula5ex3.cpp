#include <iostream>
using namespace std;

int main() {

    int val = 50;
    int *ptr = &val;

    *ptr = 100;

    cout << "Valor final de 'val' diretamente: " << val << endl;
    cout << "Valor final acessado via '*ptr': " << *ptr << endl;

    return 0;
}