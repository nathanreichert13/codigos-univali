#include <iostream>
#include "vetor.h"

using namespace std;

int main() {
    cout << "=== Teste do TAD Vetor ===" << endl << endl;

    Vetor* v = vet_cria(3);
    cout << "Vetor criado com capacidade inicial = 3" << endl;
    cout << "Tamanho inicial: " << vet_tamanho(v) << endl << endl;

    cout << "Inserindo 7 elementos..." << endl;
    float valores[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f};
    for (int i = 0; i < 7; i++) {
        vet_insere(v, valores[i]);
        cout << "  Inserido " << valores[i]
             << "  |  tamanho = " << vet_tamanho(v) << endl;
    }

    cout << endl << "Lendo todos os elementos:" << endl;
    for (int i = 0; i < vet_tamanho(v); i++) {
        cout << "  v[" << i << "] = " << vet_acessa(v, i) << endl;
    }


    cout << endl << "Teste de acesso invalido:" << endl;
    vet_acessa(v, -1);
    vet_acessa(v, 99);


    vet_libera(v);
    cout << endl << "Memoria liberada com sucesso." << endl;
    cout << endl << "Teste com ponteiro nullptr:" << endl;
    vet_insere(nullptr, 9.9f);
    vet_acessa(nullptr, 0);
    vet_tamanho(nullptr);
    vet_libera(nullptr);

    cout << endl << "=== Todos os testes concluidos ===" << endl;
    return 0;
}