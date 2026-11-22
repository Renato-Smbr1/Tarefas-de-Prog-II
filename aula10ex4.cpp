#include <iostream>
#include <vector>
using namespace std;

class Veiculo {
public:
    virtual void emitirSom() {
        cout << "Ruido generico de motor" << endl;
    }
    virtual ~Veiculo() {}
};

class Carro : public Veiculo {
public:
    void emitirSom() override { cout << "Beep beep!" << endl; }
};

class Motocicleta : public Veiculo {
public:
    void emitirSom() override { cout << "Vruum vruum!" << endl; }
};

int main() {
    Carro c;
    Motocicleta m;
    Veiculo v;

    vector<Veiculo*> frota = { &c, &m, &v };
    for (Veiculo* p : frota) {
        p->emitirSom();
    }

    Veiculo& ref = m;
    ref.emitirSom();
    return 0;
}