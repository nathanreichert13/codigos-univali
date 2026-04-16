#include <iostream>
#include <stdio.h>

using namespace std;

void numeros(){
    int num,num2;
    cout<<"Digite os dois numeros inteiros para a verificacao: ";
    cin>>num>>num2;

    if(num > num2){
        cout<<"O numero:  " << num <<" e maior que o numero: " <<num2;
    }else if(num2 > num){
        cout<<"O numero: " <<num2 <<" e maior que o numero: " <<num;
    }else{
        cout<<"Os numeros: " <<num <<" e " <<num2 <<" sao iguais "; 
    }
}

int main(){
    numeros();
    return 0;
}