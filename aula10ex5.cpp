#include <iostream>
#include <vector>
using namespace std;

const double PI = 3.14159265358979;

class FormaGeometrica {
public:
    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
    virtual ~FormaGeometrica() {}
};

class Retangulo : public FormaGeometrica {
    double base, altura;
public:
    Retangulo(double b, double a) : base(b), altura(a) {}
    double calcularArea() const override { return base * altura; }
    double calcularPerimetro() const override { return 2 * (base + altura); }
};

class Circulo : public FormaGeometrica {
    double raio;
public:
    Circulo(double r) : raio(r) {}
    double calcularArea() const override { return PI * raio * raio; }
    double calcularPerimetro() const override { return 2 * PI * raio; }
};

int main() {
    vector<FormaGeometrica*> formas;
    formas.push_back(new Retangulo(3, 4));
    formas.push_back(new Circulo(2));

    for (const FormaGeometrica* f : formas) {
        cout << "Area: " << f->calcularArea()
             << " | Perimetro: " << f->calcularPerimetro() << endl;
    }

    for (FormaGeometrica* f : formas) delete f;
    return 0;
}