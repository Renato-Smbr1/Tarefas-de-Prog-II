#include <iostream>

using namespace std;

int main () {  

    double celsius;
    cout << "Digite uma Temperatura em Graus Celsius: ";
    cin >> celsius;

    double fah = 1.8 * celsius + 32;
    double kel = celsius + 273.15;

    cout << "Temperatura em Celsius para Fahrenheit: " << fah << endl;
    cout << "Temperatura em Celsius para Kelvin: " << kel << endl;   

    int fahint = static_cast<int>(fah);

    cout << "Temperatura em Fahrenheit (inteiro): " << fahint << endl;

    return 0;
}