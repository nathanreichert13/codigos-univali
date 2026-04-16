#include <iostream>
#include <stdio.h>


using namespace std;

float calculoIMC(){
    float IMC;
    int peso;
    float altura;
    cout<<"Digite o seu peso em valor inteiro: " <<endl;
    cin>> peso;
    cout<<"Digite a sua altura, em metros, exemplo 1.75m para equivalente a 175cm: " <<endl;
    cin>>altura;

    IMC = peso / (altura * altura);

    if(IMC < 18.5){
        cout<<"abaixo do peso: " <<endl;
    }else if(IMC > 18.5 && IMC < 24.9){
        cout<<"Peso normal: " <<endl;
    }else if(IMC > 25.0 && IMC < 29.9){
        cout<<"Sobrepeso: " <<endl;
    }else if(IMC > 30.0 && IMC < 34.9){
        cout<<"Obesidade grau 1: " <<endl;
    }else if(IMC > 35.0 && IMC < 39.9){
        cout<<"Obesiade grau 2: " <<endl;
    }else{
        cout<<"Obesidade grau 3: " <<endl;
    }

    return IMC;
}

int main(){
    float IMC = calculoIMC();
    cout<<" seu imc é: "<<IMC <<endl;
    return 0;
}