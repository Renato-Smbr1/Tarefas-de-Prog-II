#include <iostream>
using namespace std;

class Termometro {
private:
    double temperaturaCelsius;
public:
    Termometro() : temperaturaCelsius(25.0) {}
    bool setTemperaturaCelsius(double t) {
        if (t < -273.15) return false;
        temperaturaCelsius = t;
        return true;
    }
    double getTemperaturaCelsius() const { return temperaturaCelsius; }
    double getTemperaturaFahrenheit() const {
        return temperaturaCelsius * 9.0 / 5.0 + 32;
    }
};

int main() {
    Termometro t;
    cout << t.getTemperaturaCelsius() << " C = " << t.getTemperaturaFahrenheit() << " F\n";
    t.setTemperaturaCelsius(100);
    cout << t.getTemperaturaCelsius() << " C = " << t.getTemperaturaFahrenheit() << " F\n";
    if (!t.setTemperaturaCelsius(-300)) cout << "Temperatura invalida\n";
    return 0;
}