#include <iostream>
#include <stdio.h>

using namespace std;

void inverter(int *vet, int tam){
    int *comeco = vet;
    int *fim = vet + tam - 1;
    int temp;
    while(comeco < fim){
        temp = *comeco;
        *comeco = *fim;
        *fim = temp;

        comeco++;
        fim--;
    }
}


int main(){
    int vet[5] = {1,2,3,4,5};

    inverter(vet, 5);

    for(int i = 0; i < 5; i++){
        cout << vet[i] << " ";
    }

    return 0;
}