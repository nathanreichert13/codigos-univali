#include <iostream>
#include <stdio.h>

using namespace std;

void vetor(){
    int tamanhoVetor = 10;
    int resultado[10];
    int a[10];
    int b[10];
    int soma = 0;
    for(int i = 0; i < tamanhoVetor; i++){
        a[i] = i + 1;
        b[i] = i + 1;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        resultado[i] = a[i] - b[9 - i];
        soma += resultado[i];
    }
    
    for(int i = 0; i < tamanhoVetor; i++){
        cout<<a[i] <<" - " <<b[9 - i] <<" = " <<resultado[i] <<endl;
    }
}

int main(){
    vetor();
    return 0;
}