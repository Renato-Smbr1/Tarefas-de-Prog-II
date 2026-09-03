#include <iostream>

using namespace std;

int main () {   
    int i = 10;
    float f = 7.5;
    char c = 'a';
    double d = 70.5;
    bool b = true;
    short s = 20;
    long l = 100000;
    unsigned int ui = 25;


    cout << "Int = " << i << ", e esse é o tamanho, em byte(s): " << sizeof(i) << endl;
    cout << "Float = " << f << ", e esse é o tamanho, em byte(s): " << sizeof(f) << endl;
    cout << "Char = " << c << ", e esse é o tamanho, em byte(s): " << sizeof(c) << endl;
    cout << "Double = " << d << ", e esse é o tamanho, em byte(s): " << sizeof(d) << endl;
    cout << "Bool = " << b << ", e esse é o tamanho, em byte(s): " << sizeof(b) << endl;
    cout << "Short = " << s << ", e esse é o tamanho, em byte(s): " << sizeof(s) << endl;
    cout << "Long = " << l << ", e esse é o tamanho, em byte(s): " << sizeof(l) << endl;
    cout << "Unsigned Int = " << ui << ", e esse é o tamanho, em byte(s): " << sizeof(ui) << endl;
    return 0;
}

