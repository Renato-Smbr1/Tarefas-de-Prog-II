#include <iostream>
using namespace std;

class ContaBancaria {
private:
    int numeroConta;
    double saldo;
public:
    ContaBancaria(int numero) : numeroConta(numero), saldo(0.0) {}
    double getSaldo() const { return saldo; }
    int getNumeroConta() const { return numeroConta; }
    bool depositar(double valor) {
        if (valor <= 0) return false;
        saldo += valor;
        return true;
    }
    bool sacar(double valor) {
        if (valor <= 0 || valor > saldo) return false;
        saldo -= valor;
        return true;
    }
};

int main() {
    ContaBancaria c(1001);
    cout << "Saldo inicial: " << c.getSaldo() << "\n";
    cout << "Deposito 500: " << (c.depositar(500) ? "ok" : "recusado") << "\n";
    cout << "Deposito -10: " << (c.depositar(-10) ? "ok" : "recusado") << "\n";
    cout << "Saque 200: " << (c.sacar(200) ? "ok" : "recusado") << "\n";
    cout << "Saque 1000: " << (c.sacar(1000) ? "ok" : "recusado") << "\n";
    cout << "Saldo final: " << c.getSaldo() << "\n";
    return 0;
}