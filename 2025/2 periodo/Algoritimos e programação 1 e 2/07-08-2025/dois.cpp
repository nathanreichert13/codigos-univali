#include <iostream>
#include <stdio.h>


using namespace std;

#define TAMANHO 15

int main(){
    int array[TAMANHO];
    int array2[TAMANHO];
    for(int i = 0; i < TAMANHO; i++){
        array[i] = i;
    }

    for(int i = 0; i < TAMANHO; i++){
        array2[i] = array[TAMANHO - i - 1];
    }

    for(int i = 0; i < TAMANHO; i++){
       cout<<array2[i] <<endl;
    }


    return 0;
}