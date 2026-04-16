#include <iostream>
#include <stdio.h>


using namespace std;

#define TAMANHO 20

int main(){
    int vetor[TAMANHO];
    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = i;
        if(vetor[i] % 2 == 0){
            cout<<"a sua posição é: " <<i <<endl;
            cout<<"o número é par: " << vetor[i] <<endl <<endl;
            
        }

    }

    return 0;
}