#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Notificacao {
public:
    virtual void enviar() const = 0;
    virtual ~Notificacao() {}
};

class Email : public Notificacao {
    string destinatario, assunto;
public:
    Email(string d, string a) : destinatario(d), assunto(a) {}
    void enviar() const override {
        cout << "[Email] Para: " << destinatario
             << " | Assunto: " << assunto << endl;
    }
};

class SMS : public Notificacao {
    string numero, texto;
public:
    SMS(string n, string t) : numero(n), texto(t) {}
    void enviar() const override {
        cout << "[SMS] Para: " << numero << " | Texto: " << texto << endl;
    }
};

class NotificacaoPush : public Notificacao {
    string app, mensagem;
public:
    NotificacaoPush(string a, string m) : app(a), mensagem(m) {}
    void enviar() const override {
        cout << "[Push] App: " << app << " | Mensagem: " << mensagem << endl;
    }
};

int main() {
    vector<unique_ptr<Notificacao>> fila;
    fila.push_back(make_unique<Email>("ana@exemplo.com", "Bem-vinda"));
    fila.push_back(make_unique<SMS>("(66) 99999-0000", "Seu codigo: 1234"));
    fila.push_back(make_unique<NotificacaoPush>("MeuApp", "Nova mensagem"));

    for (const auto& n : fila) {
        n->enviar();
    }
    return 0;
}