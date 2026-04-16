#include <iostream>
using namespace std;

struct No {
    int id;
    string nome;
    No* proximo;
};

struct Fila {
    No* inicio;
    No* fim;
};

void inicializar(Fila &f) {
    f.inicio = nullptr;
    f.fim = nullptr;
}

bool estaVazia(Fila f) {
    return (f.inicio == nullptr);
}

// ENQUEUE (abrir ticket)
void enqueue(Fila &f, int id, string nome) {
    No* novo = new No();
    novo->id = id;
    novo->nome = nome;
    novo->proximo = nullptr;

    if (estaVazia(f)) {
        f.inicio = novo;
        f.fim = novo;
    } else {
        f.fim->proximo = novo;
        f.fim = novo;
    }
}

// DEQUEUE (atender ticket)
void dequeue(Fila &f) {
    if (estaVazia(f)) {
        cout << "Nenhum ticket na fila.\n";
        return;
    }

    No* temp = f.inicio;

    cout << "Atendendo Ticket:\n";
    cout << "ID: " << temp->id << " | Nome: " << temp->nome << endl;

    f.inicio = f.inicio->proximo;

    if (f.inicio == nullptr) {
        f.fim = nullptr;
    }

    delete temp;
}

// VISUALIZAR FILA
void visualizar(Fila f) {
    if (estaVazia(f)) {
        cout << "Fila vazia.\n";
        return;
    }

    No* atual = f.inicio;

    cout << "Tickets pendentes:\n";
    while (atual != nullptr) {
        cout << "ID: " << atual->id << " | Nome: " << atual->nome << endl;
        atual = atual->proximo;
    }
}

int main() {
    Fila fila;
    inicializar(fila);

    enqueue(fila, 1, "Erro no sistema");
    enqueue(fila, 2, "Computador não liga");
    enqueue(fila, 3, "Problema na rede");

    visualizar(fila);

    dequeue(fila);
    dequeue(fila);

    visualizar(fila);

    return 0;
}