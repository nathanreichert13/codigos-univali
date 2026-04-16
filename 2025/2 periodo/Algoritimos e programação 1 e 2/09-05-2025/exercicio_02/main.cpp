#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

#define tam1 3
#define tam2 5

void matriz(){
    int matrizA[tam1][tam2];
    int matrizB[tam1][tam2];
    int matrizC[tam1][tam2];

    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            matrizA[i][j] = rand() % 5;
            matrizB[i][j] = rand() % 5;
        }
    }

    cout<<"matriz A: " <<endl;
    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            cout<<matrizA[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"matriz B: " <<endl;
    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            cout<<matrizB[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout<<"Soma da matriz A e da matriz B matriz C: " <<endl;
    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            cout<<matrizC[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"linha 2 da matriz C: " <<endl;
    for(int j = 0; j < tam2; j++){
            cout<<matrizC[1][j] <<" ";
        }
        
    
    cout<<endl;
    cout<<endl;


    cout<<"coluna 3 da matriz C: " <<endl;
        for(int i = 0; i < tam1; i++){
            cout<<matrizC[i][2] <<" ";
            cout<<endl;
          }

}

int main(){
    matriz();
    return 0;
}