#include <iostream>
#include "lista_simples.h"

using namespace std;

int main()
{
    cout << "Criando lista simples:" << endl;

    ListaSimples *lista = criarListaSimples();

    adicionarInicioDaListaSimples(lista, 30);
    adicionarInicioDaListaSimples(lista, 6);
    adicionarInicioDaListaSimples(lista, 89);

    cout << "Lista atual:" << endl;
    imprimirListaSimples(lista);

    cout << "Adicionando 69420 ao final da lista" << endl;
    adicionarUltimoDaLista(lista, 69420);

    imprimirListaSimples(lista);

    cout << "Removendo ultimo da lista" << endl;
    removerUltimoDaLista(lista);

    imprimirListaSimples(lista);

    cout << endl;
    cout << "Inserindo ordenado (50, 10, 30)" << endl;

    inserirOrdenado(lista, 50);
    inserirOrdenado(lista, 10);
    inserirOrdenado(lista, 30);

    imprimirListaSimples(lista);

    cout << endl;
    contarNos(lista);

    cout << endl;
    cout << "Invertendo lista" << endl;

    inverterLista(lista);

    imprimirListaSimples(lista);

    cout << endl;
    cout << "Liberando memoria da lista" << endl;

    liberarLista(lista);

    return 0;
}
