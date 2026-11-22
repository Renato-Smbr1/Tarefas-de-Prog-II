#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;
    virtual void emitirSom() {
        cout << "Ruido generico de motor..." << endl;
    }
    virtual ~Veiculo() {}
};

class Carro : public Veiculo {
public:
    void emitirSom() override {
        cout << "Beep beep! (buzina do carro)" << endl;
    }
};

class Motocicleta : public Veiculo {
public:
    void emitirSom() override {
        cout << "Vruum vruum! (motor da moto)" << endl;
    }
};

int main() {
    Veiculo v;
    Carro c;
    Motocicleta m;
    v.emitirSom();
    c.emitirSom();
    m.emitirSom();
    return 0;
}