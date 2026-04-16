#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int tamanho = 30;
    int vetor[tamanho];
    int multiploDe2 = 0;
    int multiploDe3 = 0;
    for(int i = 0; i < tamanho; i++){
        vetor[i] = i + 1;
    }

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 ==0 ){
            multiploDe2++;
        }if(vetor[i] % 3 == 0){
            multiploDe3++;
        }
    }

    cout<<"Multiplo de 2: " <<multiploDe2 <<endl;
    cout<<"Multiplo de 3: " <<multiploDe3 <<endl;

    return 0;
}

