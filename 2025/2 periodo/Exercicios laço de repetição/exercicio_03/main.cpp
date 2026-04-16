#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float ze = 1.10;
    float chico = 1.50;
    int ano = 0;
    while(chico >= ze){
        ze += 0.03;
        chico += 0.02;
        ano++;
    }
    cout <<"a quantidade de tempo que ira levar para que o ze passe o chico é de: " <<ano <<endl;
    return 0;
}