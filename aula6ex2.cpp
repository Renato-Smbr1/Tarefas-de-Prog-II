#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct Recurso {
    string nome;
    Recurso(string n) : nome(n) { cout << "Criado: " << nome << endl; }
    ~Recurso() { cout << "Destruido: " << nome << endl; }
};

int main() {
    cout << "--- unique_ptr ---" << endl;
    unique_ptr<Recurso> u1 = make_unique<Recurso>("Unico");
    unique_ptr<Recurso> u2 = move(u1);
    cout << "u1 vazio? " << (u1 == nullptr ? "sim" : "nao") << endl;
    cout << "u2 aponta para: " << u2->nome << endl;

    cout << "--- shared_ptr ---" << endl;
    shared_ptr<Recurso> s1 = make_shared<Recurso>("Compartilhado");
    cout << "use_count: " << s1.use_count() << endl;
    {
        shared_ptr<Recurso> s2 = s1;
        cout << "use_count com s2: " << s1.use_count() << endl;
    }
    cout << "use_count apos escopo: " << s1.use_count() << endl;

    cout << "--- weak_ptr ---" << endl;
    weak_ptr<Recurso> w = s1;
    cout << "use_count com weak_ptr: " << s1.use_count() << endl;
    if (shared_ptr<Recurso> temp = w.lock()) {
        cout << "Objeto existe: " << temp->nome << endl;
        cout << "use_count durante lock: " << s1.use_count() << endl;
    }

    s1.reset();
    if (shared_ptr<Recurso> temp = w.lock()) {
        cout << "Objeto existe: " << temp->nome << endl;
    } else {
        cout << "Objeto ja foi destruido" << endl;
    }

    return 0;
}