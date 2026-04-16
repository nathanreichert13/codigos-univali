#include <iostream>
#include <cstdlib>
#include "vetor.h"

using namespace std;

struct vetor {
    float* dados;      
    int capacidade; 
    int tamanho;    
};


Vetor* vet_cria(int cap) {
    if (cap <= 0) cap = 1;

    Vetor* v = new (nothrow) Vetor;
    if (v == nullptr) {
        cout << "falha ao alocar estrutura Vetor." << endl;
        return nullptr;
    }

    v->dados = new (nothrow) float[cap];
    if (v->dados == nullptr) {
        cout << "falha ao alocar array interno." << endl;
        delete v;
        return nullptr;
    }

    v->capacidade = cap;
    v->tamanho    = 0;
    return v;
}


void vet_insere(Vetor* v, float valor) {
    if (v == nullptr) {
        cout << "vetor invalido (nullptr)." << endl;
        return;
    }


    if (v->tamanho == v->capacidade) {
        int    nova_cap    = v->capacidade * 2;
        float* novo_array  = new (nothrow) float[nova_cap];
        if (novo_array == nullptr) {
            cout << "falha ao realocar memoria." << endl;
            return;
        }

    
        for (int i = 0; i < v->tamanho; i++)
            novo_array[i] = v->dados[i];

        delete[] v->dados;
        v->dados      = novo_array;
        v->capacidade = nova_cap;
    }

    v->dados[v->tamanho] = valor;
    v->tamanho++;
}


float vet_acessa(Vetor* v, int i) {
    if (v == nullptr) {
        cout << "vetor invalido (nullptr)." << endl;
        return 0.0f;
    }
    if (i < 0 || i >= v->tamanho) {
        cout << "Erro: indice " << i
             << " fora dos limites (tamanho = " << v->tamanho << ")." << endl;
        return 0.0f;
    }
    return v->dados[i];
}


int vet_tamanho(Vetor* v) {
    if (v == nullptr) {
        cout << "vetor invalido (nullptr)." << endl;
        return -1;
    }
    return v->tamanho;
}


void vet_libera(Vetor* v) {
    if (v == nullptr) return;
    delete[] v->dados;
    delete v;
}