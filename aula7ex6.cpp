#include <iostream>
using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto() : x(0), y(0) {}
    Ponto(double x, double y) : x(x), y(y) {}
    double getX() const { return x; }
    double getY() const { return y; }
};

int main() {
    Ponto a;
    Ponto b(3.5, -2);
    cout << "a = (" << a.getX() << ", " << a.getY() << ")\n";
    cout << "b = (" << b.getX() << ", " << b.getY() << ")\n";
    return 0;
}