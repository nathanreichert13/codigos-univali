#ifndef PONTO.H
#define PONTO.H

typedef struct ponto Ponto;

Ponto *criar(float x, float y);

void destruir(Ponto *ponto);

void definir(Ponto *ponto, float x, float y);

void definir(Ponto *ponto, float x, float y);
void exibir(Ponto *ponto);

float calcularDistancia(Ponto *ponto1, Ponto *ponto2);


#endif