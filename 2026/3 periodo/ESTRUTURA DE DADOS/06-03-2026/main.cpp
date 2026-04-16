#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int vetor[] = {4,7,10,2,1};
    int *p = vetor;
    int n = 3;

    cout<<"Valor de P (endereço inicial): " <<p <<endl;
    cout<<"valor de N: " <<n <<endl;

    int *resultado = p +n;
    cout<<endl<<"equação do slide p + n = 100 = (n * 4)" <<endl;
    cout<<"endereço final (p+3): " <<resultado <<endl;
    cout<<"valor no endereço (vetor[3]): " <<resultado <<endl;
    return 0;
}