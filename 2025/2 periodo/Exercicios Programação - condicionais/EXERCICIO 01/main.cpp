#include <stdio.h>
#include <iostream>

using namespace std;

void VerificaVogal(){
    char letra;
    cout<<"Digite uma letra para a verificacao se for ou nao vogal: ";
    cin>>letra;

    switch(letra){
        case 'A': case 'a':
        cout<<"A letra e uma vogal (A)";
        break;
        case 'E': case 'e':
        cout<<"A letra e uma vogal (E)";
        break;
        case 'I': case 'i':
        cout<<"A letra e uma vogal (I)";
        break;
        case 'O': case 'o':
        cout<<"A letra e uma vogal (O)";
        break;
        case 'U': case 'u':
        cout<<"A letra e uma vogal (U)";
        break;
        default:
        cout<<"Nao e uma vogal";
        
    }
}

int main(){
    VerificaVogal();
    return 0;
}