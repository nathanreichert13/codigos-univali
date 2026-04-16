#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int soma = 0;
    int valor;
    for(int i = 0; i < 10; i++){
        cin>>valor;
        soma+= valor;
    }
     cout<< soma << endl;
    return 0;
}