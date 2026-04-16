//exercicio 01 matriz

#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

#define tam 5

void matriz(){
    int matriz[tam][tam];
    float soma = 0;
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            cin>> matriz[i][j];
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            soma += matriz[i][j];
        }
    }

    cout<<"A soma dos resultados é de: "<<soma <<endl;

}

int main(){
    matriz();
    return 0;
}