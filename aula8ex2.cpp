#include <iostream>
using namespace std;

class Retangulo {
    double largura, altura;
public:
    Retangulo() : largura(1), altura(1) {}
    Retangulo(double l, double a) : largura(l), altura(a) {}
    explicit Retangulo(double lado) : largura(lado), altura(lado) {}
    double area() const { return largura * altura; }
    double perimetro() const { return 2 * (largura + altura); }
};

int main() {
    Retangulo r1;
    Retangulo r2(3, 5);
    Retangulo r3(4);
    cout << "Padrao: " << r1.area() << " / " << r1.perimetro() << '\n';
    cout << "3x5: "    << r2.area() << " / " << r2.perimetro() << '\n';
    cout << "Quadrado 4: " << r3.area() << " / " << r3.perimetro() << '\n';
}