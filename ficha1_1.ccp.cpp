#include <iostream>

using namespace std;


int main ()
{


     int numero;


     for (int i=0; i <1; i=0) {
         cout << "0 - sair do progama\n1 - e bom progamador\n2 - é muito bom progamador\n3 - é excelente progamador:";
         cin >> numero;

         switch (numero)
         {
         case 0:
            cout << "sair do progama\n";
            break;
           case 1:
            cout << "e bom progamdor";
            break;
           case 2:
            cout << "é muito bom progamador";
            break;
           case 3:
            cout << "é excelente progamador";
            break;
           default:
            cout << "nao sei o que me estas a pedir";
            break;
         }


    }
return 0;

}
