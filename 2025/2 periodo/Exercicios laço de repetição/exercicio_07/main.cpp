#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int base;
    int expoente;
    int resultado = 1;
    cout << "Digite a base e o expoente para realizar a potencia: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;
    for (int i = 0; i < expoente; i++){
        resultado *= base;
    }
    cout << resultado << endl;

    return 0;

   
}