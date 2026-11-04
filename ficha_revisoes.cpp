#include <iostream>

using namespace std;



int main (){

int numero [10], soma = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << " fala o numero :", i + 1;
        cin >> numero [i];

    }

    for (int i=0; i < 10; i++){
        soma += numero[i] * numero [i];
    }
    cout << "\n\n O resultado final = " << soma;







    return 0;
}
