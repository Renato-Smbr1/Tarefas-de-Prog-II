#include <iostream>
#include <string>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    int paginas;
public:
    Livro(string t, string a, int p) : titulo(t), autor(a), paginas(p) {}
    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getPaginas() const { return paginas; }
    void setTitulo(string t) { titulo = t; }
    void setAutor(string a) { autor = a; }
    void setPaginas(int p) { if (p > 0) paginas = p; }
};

int main() {
    Livro l1("Dom Casmurro", "Machado de Assis", 256);
    Livro l2("O Cortico", "Aluisio Azevedo", 304);
    Livro l3("Vidas Secas", "Graciliano Ramos", 176);
    Livro livros[] = {l1, l2, l3};
    for (const Livro& l : livros) {
        cout << l.getTitulo() << " - " << l.getAutor() << " - " << l.getPaginas() << " paginas\n";
    }
    return 0;
}