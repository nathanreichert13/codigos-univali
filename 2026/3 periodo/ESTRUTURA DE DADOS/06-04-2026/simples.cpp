#include <iostream>
#include "simples.h"
using namespace std;


No *criarNo(int valor){
    No *novoNo = new No();
    novoNo->proximo = NULL;
    novoNo->valor = valor;

    return novoNo;
}

listaSimples *criarLista(){
    listaSimples *lista = new listaSimples();
    lista->inicio = NULL;
    
    return lista;
}

void inserirLista(listaSimples *lista, int valor){
    No *novoNo = criarNo(valor);
    
    novoNo->proximo = lista->inicio;
    lista->inicio = novoNo;
}

void inserirOrdenado(listaSimples *lista, int valor){
    No *novoNo = criarNo(valor);
    
    No *atual = lista->inicio;
    while(atual->proximo != NULL && atual->proximo->valor < valor){
        
    }
}