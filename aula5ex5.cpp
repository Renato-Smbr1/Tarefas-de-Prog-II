#include <iostream>
using namespace std;

int main() {
    float *ptrFloat = new float;

    cout << "Digite um numero real (float): ";
    cin >> *ptrFloat;

    float quadrado = (*ptrFloat) * (*ptrFloat);

    cout << "O quadrado de " << *ptrFloat << " e: " << quadrado << endl;

    delete ptrFloat;
    ptrFloat = nullptr; 

    return 0;
}