#ifndef fila_h
#define fila_h

#include <iostream>
using namespace std;

struct No{
    string valor;
    No *proximo;
};

struct listaEncadeada{
    No *comeco;
    No *fim;
};

No *criarNo(string valor);


#endif
