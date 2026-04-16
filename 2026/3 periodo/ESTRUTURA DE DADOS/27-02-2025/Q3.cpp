#include <iostream> 
#include <stdio.h>

using namespace std;

int q1(){
    int num1;
    cout<<"Digite um numero: " <<endl;
    cin>>num1;
    if(num1 > 0 ){
        cout<<"Numero positivo: " <<num1 <<endl;
    }else if(num1 < 0){
        cout<<"Numero negativo: " <<num1 <<endl;
    }else{
        cout<<"O numero é negativo: " <<num1 <<endl ;
    };
    
     if(num1 % 2 == 0){
        cout<<"O numero é par:  " <<num1 <<endl;
    }else{
        cout<<"O numero é impar: " <<num1 <<endl;
    }

    return 0;
}

int q2(){
    int valor;
    cout<<"Digite um numero inteiro: " <<endl;
    cin>>valor;
    for(int i = 0; i <=10; i++){
        int resultado = valor * i;
        if(resultado % 3 == 0){
            cout<<valor <<"X" <<i <<" = " << resultado <<endl;
        }
    }
    return 0;
}


int main(){
    int num;
    do{
    cout<<"Digite um número de 0 a 2" <<endl;
    cout<<"1 - Verificação de numero par e se positivo: " <<endl;
    cout<<"2 - Tabuada de um numero inteiro e multiplos de 3: "<<endl;
    cout<<"0 - Sair do programama: " <<endl;
    cin>>num;
     if(num == 1){
        q1();
        }
        else if(num == 2){
            q2();
        }
    }while(num != 0);
    return 0;
}