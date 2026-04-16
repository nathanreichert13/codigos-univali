#include <iostream>
#include <stdio.h>
#include<cstdlib>
using namespace std;

#define tam1 5
#define tam2 5


int main(){
    int matriz[tam1][tam2];
    int vetor1[tam1];
    int vetor2[tam2];
    int somaLinha[tam1] = {0};
    int somaColuna[tam2] = {0};

    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            matriz[i][j] = rand() % 10;
            cout<<matriz[i][j] <<" ";

            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
        cout<<endl;
    }


    cout<<"\nSoma das linhas: ";
    for(int i = 0; i < tam1; i++){
        cout<<somaLinha[i] <<" ";
    }

    cout<<"\nSoma das colunas: ";
    for(int j = 0; j < tam2; j++){
        cout<<somaColuna[j] <<" ";
    }

    return 0;
    



}