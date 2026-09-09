#include <iostream>

using namespace std;

int fibonacci (int num) {
    if (num <= 1) {
        return num;
    }
    else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }

    return 0;
}

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    
    cout << "O número " << num << " de Fibonacci é: " << fibonacci(num) << endl;
    return 0;
}