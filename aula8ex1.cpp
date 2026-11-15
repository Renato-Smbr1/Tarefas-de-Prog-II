#include <iostream>
using namespace std;

class MatrizDinamica {
    int** dados;
    int linhas, colunas;
public:
    MatrizDinamica(int l, int c) : linhas(l), colunas(c) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++)
            dados[i] = new int[colunas]();
    }
    MatrizDinamica(const MatrizDinamica& o) : linhas(o.linhas), colunas(o.colunas) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++) dados[i][j] = o.dados[i][j];
        }
    }
    MatrizDinamica& operator=(const MatrizDinamica&) = delete;
    ~MatrizDinamica() {
        for (int i = 0; i < linhas; i++) delete[] dados[i];
        delete[] dados;
    }
    int& at(int i, int j) { return dados[i][j]; }
    void imprimir() const {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) cout << dados[i][j] << ' ';
            cout << '\n';
        }
    }
};

int main() {
    MatrizDinamica a(3, 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) a.at(i, j) = i * 3 + j + 1;

    MatrizDinamica b(a);
    b.at(0, 0) = 99;
    b.at(2, 2) = -1;

    cout << "Original:\n"; a.imprimir();
    cout << "Copia:\n";    b.imprimir();
}
