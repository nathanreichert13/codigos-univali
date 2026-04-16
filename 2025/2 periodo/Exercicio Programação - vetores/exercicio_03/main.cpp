#include <iostream>
#include <stdio.h>

using namespace std;

void vetor(){
    int tamanhoVetor = 10;
    int vetor1[tamanhoVetor];
    int vetor2[tamanhoVetor];
    int vetor3[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        vetor1[i] = i + 1;
        vetor2[i] = i + 1;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        if(vetor1[i] == vetor2[i]){
            vetor3[i] = vetor1[i] * vetor2[i];
        }
    }

   for(int i = 0; i < tamanhoVetor; i++){
        cout<<vetor3[i] <<endl;
   }


}

int main(){
    vetor();
    return 0;
}