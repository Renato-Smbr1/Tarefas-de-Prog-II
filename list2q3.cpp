#include <iostream>

using namespace std;

#define TAXA_JUROS 0.05

int main () {  
   const int anos = 3;
   float cap;

   cout << "Digite o valor do Capital Inicial: ";
   cin >> cap;

   double mont = cap * (1 + TAXA_JUROS * anos);
   double dif = mont - cap;

   cout << "Esse é o valor final do montante: " << mont << endl;
   cout << "Essa é a diferença: " << dif << endl;

    return 0;
}