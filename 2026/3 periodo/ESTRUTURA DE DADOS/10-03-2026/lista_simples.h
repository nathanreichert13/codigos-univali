#ifndef LISTA_SIMPLES_H
#define LISTA_SIMPLES_H

struct No
{
    int valor;
    No *proximo;
};

struct ListaSimples{
    No *inicio;
};

ListaSimples *criarListaSimples();
void adicionarInicioDaListaSimples(ListaSimples *listaSimples, int valor);
void imprimirListaSimples(ListaSimples *listaSimples);
void removerUltimoDaLista(ListaSimples *listaSimples);
void adicionarUltimoDaLista(ListaSimples *listaSimples, int valor);
void inserirOrdenado(ListaSimples *listaSimples, int valor);
void contarNos(ListaSimples *listaSimples);
void inverterLista(ListaSimples *listaSimples);
void liberarLista(ListaSimples *listaSimples);

#endif
