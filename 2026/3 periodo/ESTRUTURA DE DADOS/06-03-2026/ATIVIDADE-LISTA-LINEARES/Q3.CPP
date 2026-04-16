#include <iostream>
using namespace std;

struct ListaEstatica{
    int quantidade;
    int vetor[10];
};

void inicializar(ListaEstatica *l){
    l->quantidade = 0;
}

bool inserir(ListaEstatica *l, int valor){
    if(l->quantidade == 10){
        return false;
    }
    l->vetor[l->quantidade] = valor;
    l->quantidade++;
}

int buscar(ListaEstatica *l, int valor){

}

bool remover(ListaEstatica *l, int valor){
    
}

int main(){

}