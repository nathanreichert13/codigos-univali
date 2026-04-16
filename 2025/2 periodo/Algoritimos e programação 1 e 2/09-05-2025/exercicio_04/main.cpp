#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

#define tam1 4
#define tam2 4

int main(){
    int matriz[tam1][tam2];
    int soma = 0;

    for(int i = 0; i < tam1; i++){ //insere os valores da matriz, randomizado
        for(int j = 0; j < tam2; j++){
            matriz[i][j] = rand() % 10;
            cout<<matriz[i][j] << " ";
        }
        cout<<endl;
    }

    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            if(i == j){ //diagonal principal
                soma += matriz[i][j]; //soma da diagonal principal
            }
        }
    }

    cout<<"\nA soma da diagonal principal é de: " <<soma <<endl;


    return 0;
}