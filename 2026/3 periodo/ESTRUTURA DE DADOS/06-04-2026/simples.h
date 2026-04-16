#ifndef SIMPLES_H
#define SIMPLES_H

struct No
{
    int valor;
    No *proximo;
};

struct listaSimples{
    No *inicio;
};


listaSimples *criarLista();
void inserirLista(listaSimples *lista, int valor);
void inverterLista(listaSimples *lista);

#endif