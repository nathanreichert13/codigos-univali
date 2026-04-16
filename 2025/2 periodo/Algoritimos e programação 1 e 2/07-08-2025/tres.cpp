#include <iostream>
#include <stdio.h>


using namespace std;

#define LINHA 5
#define COLUNA 5

int main(){
    int matriz[LINHA][COLUNA];
    int valor = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = valor;
            valor++;
        }
        cout<<endl;
    }


    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j <COLUNA; j++){
            cout<<matriz[i][j] <<"\t";
        }
        cout<<edl;
    }


    return 0;
}