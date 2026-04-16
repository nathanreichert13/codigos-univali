#include <iostream>
#include <stdio.h>

using namespace std;

void vetor()
{
    int vetor[5];
    int maiorPrimeiro = 0;
    for (int i = 0; i < 5; i++){
        cout << "Digite os numeros do vetor: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i] > vetor[i + 1]){
            maiorPrimeiro++;
        }
    }
    cout<<maiorPrimeiro <<endl;


}

int main()
{
    vetor();
    return 0;
}