#include <stdio.h>
#include <iostream>
using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void mostraTabuleiro (string arr[LINHAS][COLUNAS]);
void prencheTabuleiro (string arr[LINHAS][COLUNAS]);
int pedePecaJogador ();
bool colocaPecaTabuleiro(string peca, int coluna, string arr [LINHAS][COLUNAS]);
bool tabuleiroCheio (string arr [LINHAS][COLUNAS]);
bool ganhouJogo (int &quemGanhou, string arr [LINHAS][COLUNAS]);



int main (){
    string p1 = " ",p2 = " ",p3 = " ",p4 = " ",p5 = " ",p6 = " ",p7 = " ",p8 = " ",p9 = " ", p10 = " ", p11 = " ", p12 = " ", p13 = " ", p14 = " ", p15 = " ", p16 = " ", p17 = " " , p18 = " ", p19 = " ", p20 = " ", p21 = " ", p22 = " ", p23 = " ", p24 = " ", p25 = " ", p26 = " ", p27 = " ";
    string p28 = " ", p29 = " ", p30 = " ", p31 = " ", p32 = " ", p33 = " ", p34 = " ", p35 = " ", p36 = " ";
    string tabuleiro [LINHAS][COLUNAS];
    int quemJoga=1; // 1-X -1º jogar // 2-O -2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;


        cout << "\n|" << p1  << "|"<< p2 << "|" << p3 << "|" << p4 << "|" << p5 << "|" << p6 << "|" << p7 << "|" << p8 << "|" << p9 << "|";
        cout << "\n|" << p10 << "|" << p11 << "|" << p12 << "|" << p13<< "|" << p14 << "|" << p15 << "|" << p16 << "|" << p17 << "|" << p18 << "|";
        cout << "\n|" << p19 << "|" << p20 << "|" << p21 << "|" << p22 << "|" << p23 << "|" << p24 << "|" << p25 << "|" << p26 << "|" << p27 << "|";
        cout << "\n|" << p19 << "|" << p20 << "|" << p21 << "|" << p22 << "|" << p23 << "|" << p24 << "|" << p25 << "|" << p26 << "|" << p27 << "|";
        cout << "\n|" << p19 << "|" << p20 << "|" << p21 << "|" << p22 << "|" << p23 << "|" << p24 << "|" << p25 << "|" << p26 << "|" << p27 << "|";
        cout << "\n|" << p19 << "|" << p20 << "|" << p21 << "|" << p22 << "|" << p23 << "|" << p24 << "|" << p25 << "|" << p26 << "|" << p27 << "|";





    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador ();
        jogou = colocaPecaTabuleiro ("x", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    //tabuleiro [0][1] ="s";
    // mostraTabuleiro(tabuleiro);
    // mostraTabuleiro (tabuleiro);




    return 0;
}
void prencheTabuleiro (string arr[LINHAS][COLUNAS]){
    for (int i = 0; i<LINHAS; i++) {
        for (int j = 0; j<COLUNAS; i++){

    }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {
    //cout << "\nLinha 1: Coluna 2: -"<<arr [0][1] <<"-";
    // arr [0][1]= "a";/
}

int pedePecaJogador (){
    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]){
    return false;
}
bool ganhouJogo( int &quemGanhou, string arr[LINHAS][COLUNAS]){

    return false;
}


