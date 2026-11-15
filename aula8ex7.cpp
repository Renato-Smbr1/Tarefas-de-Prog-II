#include <iostream>
using namespace std;

double calcularArea(double lado) { return lado * lado; }
double calcularArea(double largura, double altura) { return largura * altura; }
double calcularArea(double base, double altura, char) { return base * altura / 2; }

int main() {
    cout << "Quadrado: "   << calcularArea(4.0) << '\n';
    cout << "Retangulo: "  << calcularArea(3.0, 5.0) << '\n';
    cout << "Triangulo: "  << calcularArea(6.0, 2.0, 't') << '\n';
}