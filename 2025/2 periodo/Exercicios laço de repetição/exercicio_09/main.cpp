#include <iostream>

using namespace std;

int main(){
    float numero;
    cout<<"Digite um número real positivo: ";
    do{
        cin >> numero;
        if(numero <= 0){
            cout<<"Número inválido, tente novamente" <<endl;
        }else{
            cout<<"O numéro é válido" <<endl;
        }


    }while(numero <= 0);
}