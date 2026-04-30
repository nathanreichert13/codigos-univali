#include <iostream>
using namespace std;

struct No {
    int valor;
    No* esq;
    No* dir;
};

// Cria e retorna um novo nó com o valor informado
No* criarNo(int valor) {
    No* novo = new No();
    novo->valor = valor;
    novo->esq = nullptr;
    novo->dir = nullptr;
    return novo;
}

// Insere um valor na BST de forma recursiva:
// se menor vai para esquerda, se maior para direita
No* inserir(No* raiz, int valor) {
    if (raiz == nullptr)
        return criarNo(valor);
    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->valor)
        raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}

// Busca um valor na BST e retorna o ponteiro para o nó, ou nullptr se não encontrado
No* buscar(No* raiz, int valor) {
    if (raiz == nullptr || raiz->valor == valor)
        return raiz;
    if (valor < raiz->valor)
        return buscar(raiz->esq, valor);
    return buscar(raiz->dir, valor);
}

// Retorna o nó com o menor valor de uma subárvore (mais à esquerda)
No* menorNo(No* no) {
    while (no->esq != nullptr)
        no = no->esq;
    return no;
}

// Remove um nó da BST mantendo a propriedade de busca.
// Casos tratados:
//   Caso 0 (folha): simplesmente libera o nó e retorna nullptr ao pai.
//   Caso 1 (um filho): o pai recebe o único filho, o nó é liberado.
//   Caso 2 (dois filhos): substitui o valor pelo sucessor in-order (menor da subárvore direita),
//                         depois remove o sucessor recursivamente.
No* remover(No* raiz, int valor) {
    if (raiz == nullptr)
        return nullptr;

    if (valor < raiz->valor) {
        raiz->esq = remover(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = remover(raiz->dir, valor);
    } else {
        // Nó encontrado — determina o caso de remoção
        if (raiz->esq == nullptr && raiz->dir == nullptr) {
            // Caso 0: nó folha — libera diretamente
            delete raiz;
            return nullptr;
        } else if (raiz->esq == nullptr) {
            // Caso 1: só filho direito — pai aponta para filho direito
            No* temp = raiz->dir;
            delete raiz;
            return temp;
        } else if (raiz->dir == nullptr) {
            // Caso 1: só filho esquerdo — pai aponta para filho esquerdo
            No* temp = raiz->esq;
            delete raiz;
            return temp;
        } else {
            // Caso 2: dois filhos — substitui pelo sucessor in-order
            No* sucessor = menorNo(raiz->dir);
            raiz->valor = sucessor->valor;
            raiz->dir = remover(raiz->dir, sucessor->valor);
        }
    }
    return raiz;
}

// Percorre a árvore em ordem (esquerda → raiz → direita), imprimindo os valores ordenados
void exibirInOrder(No* raiz) {
    if (raiz == nullptr)
        return;
    exibirInOrder(raiz->esq);
    cout << raiz->valor << " ";
    exibirInOrder(raiz->dir);
}

void imprimirInOrder(const string& msg, No* raiz) {
    cout << msg << ": ";
    exibirInOrder(raiz);
    cout << endl;
}

int main() {
    No* raiz = nullptr;

    // Inserções na ordem exata exigida pelo enunciado
    int valores[] = {50, 30, 70, 20, 40, 60, 80, 15, 25, 35, 45};
    for (int v : valores)
        raiz = inserir(raiz, v);

    imprimirInOrder("Arvore original     ", raiz);

    // Sequência de remoções conforme o desafio prático
    raiz = remover(raiz, 15);
    imprimirInOrder("Apos remover  15    ", raiz);

    raiz = remover(raiz, 20);
    imprimirInOrder("Apos remover  20    ", raiz);

    raiz = remover(raiz, 30);
    imprimirInOrder("Apos remover  30    ", raiz);

    raiz = remover(raiz, 70);
    imprimirInOrder("Apos remover  70    ", raiz);

    raiz = remover(raiz, 50);
    imprimirInOrder("Apos remover  50    ", raiz);

    // Teste de busca
    cout << "\nBusca pelo 60: " << (buscar(raiz, 60) ? "encontrado" : "nao encontrado") << endl;
    cout << "Busca pelo 15: " << (buscar(raiz, 15) ? "encontrado" : "nao encontrado") << endl;

    return 0;
}