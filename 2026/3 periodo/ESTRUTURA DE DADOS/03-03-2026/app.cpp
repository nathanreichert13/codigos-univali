#include <iostream>
#include "ponto.h"

int main(){
    Ponto *ponto1 = criar(0.0 , 0.0);
    Ponto *ponto2 = criar(3.0 , 4.0);

    float distancia = calcularDistancia(ponto1, ponto2);
    
    return 0;
}