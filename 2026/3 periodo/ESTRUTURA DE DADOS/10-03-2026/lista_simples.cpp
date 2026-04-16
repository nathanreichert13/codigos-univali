#include <iostream>
#include <cstdlib>
#include "lista_simples.h"

using namespace std;

No *_criarNo(int valor){
    No *no = (No*)calloc(1, sizeof(No));

    no->valor = valor;
    no->proximo = NULL;

    return no;
}

ListaSimples *criarListaSimples(){
    ListaSimples *lista = (ListaSimples*)calloc(1, sizeof(ListaSimples));
    lista->inicio = NULL;

    return lista;
}

void adicionarInicioDaListaSimples(ListaSimples *listaSimples, int valor){
    No *no = _criarNo(valor);

    no->proximo = listaSimples->inicio;
    listaSimples->inicio = no;
}

void imprimirListaSimples(ListaSimples *listaSimples){
    No *no = listaSimples->inicio;

    while(no != NULL){
        cout << no->valor << " -> ";
        no = no->proximo;
    }
    cout << "NULL" << endl;
}

void removerUltimoDaLista(ListaSimples *listaSimples){

    if(listaSimples->inicio == NULL){
        return;
    }

    if(listaSimples->inicio->proximo == NULL){
        free(listaSimples->inicio);
        listaSimples->inicio = NULL;
        return;
    }

    No *atual = listaSimples->inicio;

    while(atual->proximo->proximo != NULL){
        atual = atual->proximo;
    }

    free(atual->proximo);
    atual->proximo = NULL;
}

void adicionarUltimoDaLista(ListaSimples *listaSimples, int valor){
    No *no = _criarNo(valor);

    if(listaSimples->inicio == NULL){
        listaSimples->inicio = no;
        return;
    }

    No *atual = listaSimples->inicio;

    while(atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = no;
}

void inserirOrdenado(ListaSimples *listaSimples, int valor){
    No *novoNo = _criarNo(valor);

    if(listaSimples->inicio == NULL || valor < listaSimples->inicio->valor){
        novoNo->proximo = listaSimples->inicio;
        listaSimples->inicio = novoNo;
        return;
    }

    No *atual = listaSimples->inicio;

    while(atual->proximo != NULL && atual->proximo->valor < valor){
        atual = atual->proximo;
    }

    novoNo->proximo = atual->proximo;
    atual->proximo = novoNo;
}

void contarNos(ListaSimples *listaSimples){
    No *atual = listaSimples->inicio;
    int contador = 0;

    while(atual != NULL){
        contador++;
        atual = atual->proximo;
    }

    cout << "Quantidade de nós: " << contador << endl;
}

void inverterLista(ListaSimples *listaSimples){
    No *anterior = NULL;
    No *atual = listaSimples->inicio;
    No *proximo = NULL;

    while(atual != NULL){

        proximo = atual->proximo;
        atual->proximo = anterior;

        anterior = atual;
        atual = proximo;
    }

    listaSimples->inicio = anterior;
}

void liberarLista(ListaSimples *listaSimples){
    No *atual = listaSimples->inicio;
    No *temp;

    while(atual != NULL){
        temp = atual;
        atual = atual->proximo;
        free(temp);
    }

    free(listaSimples);
}
c