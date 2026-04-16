#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define TAM 11

struct Aluno{
    int matricula;
    char nome[100];
};

struct No{
    Aluno aluno;
    No *proximo;
};

struct TabelaHash{
    No *dados[TAM];
};


int funcaoHash(int chave){
    return chave % TAM;
}

void inserirExterior(TabelaHash *tabela, Aluno alunoNovo){
    int id = funcaoHash(alunoNovo.matricula);

    No *novoNo = (No*)calloc(1, sizeof(No));
    novoNo->aluno = alunoNovo;

    novoNo->proximo = tabela->dados[id];
    tabela->dados[id] = novoNo;

    printf("Aluno %s inserido no indice %d (exterior) \n ", alunoNovo.nome, id);
}

void imprimirTabela(TabelaHash *tabela){
    for(int i = 0; i < TAM; i++){
        printf("Indice %d: ", i);

        No *atual = tabela->dados[i];

        if(atual == NULL){
            printf("NULL");
        }

        while(atual != NULL){
            printf("[%d, %s] -> ", atual->aluno.matricula, atual->aluno.nome);
            atual = atual->proximo;
        }

        printf("\n");
    }
}

Aluno *buscaExterior(TabelaHash *tabela, int matricula){
    int id = funcaoHash(matricula);
    
    No *atual = tabela->dados[id];
    while(atual != NULL){
        if(atual->aluno.matricula == matricula){
            return &(atual->aluno);

            atual = atual->proximo;
        }
        return NULL;
    }
}

void refatorarHash(TabelaHash *tabela,Aluno alunoNovo){
    int id = funcaoHash(alunoNovo.matricula);
    int i = 0;
    
    
}

void imprimirAberto(TabelaHash *tabela){
    printf("--------Tabela Hash aberto");
    for(int i =0; i < TAM; i++){
        printf("[%d]: ", i);
        if(tabela->dados[i] == NULL){
            printf("Livre");
        }else{
            
        }
    }
}

int main(){
    TabelaHash *tabela = (TabelaHash*)calloc(1, sizeof(TabelaHash));

    Aluno joao = {123, "João"};
    Aluno alice = {12, "Alice"};
    Aluno neymarJr = {23, "Neymar Jr"};
    Aluno felipe = {10, "Felipe"};

    inserirExterior(tabela, joao);
    inserirExterior(tabela, alice);
    inserirExterior(tabela, neymarJr);
    inserirExterior(tabela, felipe);

    imprimirTabela(tabela);

    Aluno *buscaDaAlice = buscaExterior(tabela, 12);
    Aluno *buscaNulae = buscaExterior(tabela, 5678);



    return 0;
}