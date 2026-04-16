#include <iostream> 
#include <stdio.h>

using namespace std;

int main(){
    int valor;
    cout<<"Digite um numero inteiro: " <<endl;
    cin>>valor;
    for(int i = 0; i < 10; i++){
        int resultado = valor * i;
        if(resultado % 3 == 0){
            cout<<valor <<"X" <<i <<" = " << resultado <<endl;
        }
    }
    return 0;
}


//fazer com recursão como desafio
