#include <iostream>
using namespace std;

class Vetor3D {
    double x, y, z;
public:
    Vetor3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    Vetor3D operator+(const Vetor3D& o) const {
        return Vetor3D(x + o.x, y + o.y, z + o.z);
    }
    double operator*(const Vetor3D& o) const {
        return x * o.x + y * o.y + z * o.z;
    }
    friend ostream& operator<<(ostream& os, const Vetor3D& v) {
        return os << '(' << v.x << ", " << v.y << ", " << v.z << ')';
    }
};

int main() {
    Vetor3D a(1, 2, 3), b(4, 5, 6);
    cout << "a + b = " << (a + b) << '\n';
    cout << "a * b = " << (a * b) << '\n';

    Vetor3D i(1, 0, 0), j(0, 1, 0);
    cout << "i * j = " << (i * j) << '\n';
}