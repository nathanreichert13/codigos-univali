#include <stdio.h>
#include <iostream>

using namespace std;

void  menorNumero(){
    int num,num2,num3;
  
    cout<<"Digite os 3 numeros para verificar qual o menor entre eles: ";
    cin>>num>>num2>>num3;

    int menor = num;
    if(num2 < menor){
        menor = num2;
    }else if(num3 < menor){
        menor = num3;
    }else{
        menor = menor;
    }

    cout<<"O menor numero entre os digitados e: " <<menor;
    
}

int main(){
    menorNumero();
    return 0;
}