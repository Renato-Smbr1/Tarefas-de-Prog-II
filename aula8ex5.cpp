#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class ArquivoTexto {
    ofstream arq;
public:
    explicit ArquivoTexto(const string& caminho) : arq(caminho) {
        if (!arq.is_open())
            cerr << "Erro: nao foi possivel abrir " << caminho << '\n';
        else
            cout << "Arquivo aberto: " << caminho << '\n';
    }
    ~ArquivoTexto() {
        if (arq.is_open()) {
            arq.close();
            cout << "Arquivo fechado pelo destrutor\n";
        }
    }
    bool aberto() const { return arq.is_open(); }
    void escrever(const string& texto) {
        if (arq.is_open()) arq << texto << '\n';
    }
};

int main() {
    {
        ArquivoTexto f("saida.txt");
        f.escrever("primeira linha");
        f.escrever("segunda linha");
        cout << "Fim do bloco\n";
    }
    cout << "Depois do bloco\n";

    ArquivoTexto ruim("/pasta/inexistente/x.txt");
}