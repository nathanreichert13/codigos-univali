#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int *p = new int(5);
    for(int i = 0; i < 5; i++){
        cout<<"Digite 5 valores: " <<endl;
        cin>> *(p+i);
    }

    for(int i = 0; i < 5; i++){
        cout<<"VALORES PREENCHIDOS PELO USUÁRIO NO VETOR: " << *(p+i) <<endl;
        cout<<"VALORES DO ENDEREÇO DE MEMÓRIA PREENCHDOS PELO USUÁRIO: " <<(p+i) <<endl;
    }

    delete p;

    return 0;
}