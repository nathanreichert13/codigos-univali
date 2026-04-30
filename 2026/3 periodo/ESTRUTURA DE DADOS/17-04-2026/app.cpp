#include <iostream>

using namespace std;

struct No
{
    int dado;
    No *esquerda;
    No *direita;
};

No *criarNo(int dado)
{
    No *novoNo = new No();
    novoNo->dado = dado;
    novoNo->direita = NULL;
    novoNo->esquerda = NULL;

    return novoNo;
}

No *inserir(No *noAtual, int dado){
    if (noAtual == NULL){
        return criarNo(dado);
    }
    if (dado < noAtual->dado){
        noAtual->esquerda = inserir(noAtual->esquerda, dado);
    }
    else if (dado > noAtual->dado){
        noAtual->direita = inserir(noAtual->direita, dado);
    }
    return noAtual;
}

void inOrder(No *noAtual){
    if(noAtual != NULL){
        inOrder(noAtual->esquerda);
        printf("%d", noAtual->dado);
        inOrder(noAtual->direita);
    }
}

int contarFolhas(No *noAtual){
    if(noAtual == NULL){
        return 0;
    }
    if(noAtual->esquerda == NULL && noAtual->direita == NULL){
        return 1;
    }
    return contarFolhas(noAtual->esquerda) + contarFolhas(noAtual->direita);
}

bool ehBST(No *noAtual, int min, int max){

}

int main(){
    No *arvore = NULL;
    cout << "\n inserindo valores na arvore -- \n";
    arvore = inserir(arvore, 50);
    inserir(arvore, 30);
    inserir(arvore, 20);
    inserir(arvore, 40);
    inserir(arvore, 70);
    inserir(arvore, 60);
    inserir(arvore, 80);

    cout<<"\n Realizando o caminho in-order";
    inOrder(arvore);

    printf("\n contando as folhas da arvore ");
    int total = contarFolhas(arvore);
    cout<<"Total de folhas: " <<total <<" folhas " <<endl;
    return 0;
}