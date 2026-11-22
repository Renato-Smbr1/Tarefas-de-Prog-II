#include <iostream>
using namespace std;

class Dispositivo {
protected:
    int identificador;
public:
    Dispositivo(int id = 0) : identificador(id) {}
    void exibirId() const {
        cout << "Identificador: " << identificador << endl;
    }
};

class Impressora : virtual public Dispositivo {
public:
    Impressora(int id = 0) : Dispositivo(id) {}
    void imprimir() const { cout << "Imprimindo..." << endl; }
};

class Scanner : virtual public Dispositivo {
public:
    Scanner(int id = 0) : Dispositivo(id) {}
    void escanear() const { cout << "Escaneando..." << endl; }
};

class Multifuncional : public Impressora, public Scanner {
public:
    Multifuncional(int id) : Dispositivo(id), Impressora(id), Scanner(id) {}
};

int main() {
    Multifuncional mf(42);
    mf.exibirId();
    mf.imprimir();
    mf.escanear();
    return 0;
}