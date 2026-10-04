#include <iostream>
using namespace std;

void inverterSinais(int *a, int *b) {
    if (a != nullptr && b != nullptr) {
        *a = -(*a);
        *b = -(*b);
    }
}

int main() {
    int x = 15;
    int y = -42;

    cout << "--- Antes da execucao ---" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    inverterSinais(&x, &y);

    cout << "\n--- Depois da execucao ---" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}