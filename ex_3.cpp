#include <iostream>

using namespace std;


int main (){
    int quantidade;
    double numero, soma = 0.0;


    cout << "Quantos numeros deseja somar?";
    cin >> quantidade;


    for (int i = 0; i < quantidade; i++){
        cout <<"introduza" << i+1 << "numero:";
        cin >> numero;
        soma += numero;
    }
    cout << "\nO resultado da soma dos"<< quantidade << "numeros e:"<< soma << endl;




    return 0;
}
