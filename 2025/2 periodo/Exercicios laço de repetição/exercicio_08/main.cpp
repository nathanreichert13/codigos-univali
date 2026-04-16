#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int numeros;
    int soma = 0;
    int par = 0;
    float media = 0;
    do{
        cout<<"Digite os numeros para a media somente dos pares: ";
        cin >> numeros;
        if(numeros != 0 && numeros % 2 == 0){
            soma += numeros;
            par++;
        }

        media = soma / par;


    }while(numeros != 0);

    cout<<"A media aritimetica é de: " <<media <<endl;

    return 0;

      

    
    
}