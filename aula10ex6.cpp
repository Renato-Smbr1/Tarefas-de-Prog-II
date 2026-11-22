#include <iostream>
using namespace std;

class Recurso {
public:
    Recurso() { cout << "Recurso criado" << endl; }
    virtual ~Recurso() { cout << "Recurso destruido" << endl; }
};

class RecursoArquivo : public Recurso {
    char* buffer;
public:
    RecursoArquivo() : buffer(new char[1024]) {
        cout << "RecursoArquivo: buffer de 1024 bytes alocado" << endl;
    }
    ~RecursoArquivo() override {
        delete[] buffer;
        cout << "RecursoArquivo: buffer liberado" << endl;
    }
};

int main() {
    Recurso* r = new RecursoArquivo();
    delete r;
    return 0;
}