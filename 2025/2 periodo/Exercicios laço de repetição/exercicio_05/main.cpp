#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tabuada;
    int resultado;
    cout<<"Digite um numero para que gere a tabuada: ";
    cin>>tabuada;
    for(int i = 0; i <=10; i++){
        resultado = tabuada * i;
        cout<<tabuada <<" X " <<i << " = " <<resultado <<endl;
    }

    return 0;
}