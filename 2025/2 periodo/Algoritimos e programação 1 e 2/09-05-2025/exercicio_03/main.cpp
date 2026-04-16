#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

#define tam1 5
#define tam2 5

int main(){
    int matriz[tam1][tam2];
    int maior = 0;
    
    for(int i = 0; i < tam1; i ++){
        for(int j = 0 ; j < tam2; j++){
            matriz[i][j] = rand() % 20;
            cout<<matriz[i][j] <<" ";

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        cout<< endl;
    }
    cout<<"\nMaior valor da matriz: " <<maior <<endl;
    return 0;

}