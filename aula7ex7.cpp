#include <iostream>
using namespace std;

class Retangulo {
private:
    double largura, altura;
public:
    Retangulo(double l, double a) : largura(1), altura(1) {
        setLargura(l);
        setAltura(a);
    }
    double getLargura() const { return largura; }
    double getAltura() const { return altura; }
    void setLargura(double l) { if (l > 0) largura = l; }
    void setAltura(double a) { if (a > 0) altura = a; }
    double area() const { return largura * altura; }
    double perimetro() const { return 2 * (largura + altura); }
};

int main() {
    Retangulo r1(5, 3);
    Retangulo r2(10, 2);
    cout << "r1: area=" << r1.area() << " perimetro=" << r1.perimetro() << "\n";
    cout << "r2: area=" << r2.area() << " perimetro=" << r2.perimetro() << "\n";
    if (r1.area() > r2.area()) cout << "r1 tem maior area\n";
    else if (r1.area() < r2.area()) cout << "r2 tem maior area\n";
    else cout << "Areas iguais\n";
    if (r1.perimetro() > r2.perimetro()) cout << "r1 tem maior perimetro\n";
    else if (r1.perimetro() < r2.perimetro()) cout << "r2 tem maior perimetro\n";
    else cout << "Perimetros iguais\n";
    return 0;
}