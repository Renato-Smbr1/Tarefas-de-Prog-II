#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;
};

class Carro : public Veiculo {
public:
    int numeroPortas;
};

int main() {
    Carro c;
    c.marca = "Toyota";
    c.numeroPortas = 4;
    cout << "Marca: " << c.marca << endl;
    cout << "Portas: " << c.numeroPortas << endl;
    return 0;
}