#include <iostream>
using namespace std;

#define MAX 100

struct Pilha {
    char itens[MAX];
    int topo;
};

// Inicializar pilha
void inicializar(Pilha &p) {
    p.topo = -1;
}

// Verificar se está cheia
bool cheia(Pilha p) {
    return p.topo == MAX - 1;
}

// Verificar se está vazia
bool vazia(Pilha p) {
    return p.topo == -1;
}

// Empilhar
void push(Pilha &p, char c) {
    if (!cheia(p)) {
        p.itens[++p.topo] = c;
    }
}

// Desempilhar
char pop(Pilha &p) {
    if (!vazia(p)) {
        return p.itens[p.topo--];
    }
    return '\0';
}

int main() {
    Pilha p;
    inicializar(p);

    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Empilha cada letra
    for (char c : palavra) {
        push(p, c);
    }

    cout << "Palavra invertida: ";

    // Desempilha (inverte)
    while (!vazia(p)) {
        cout << pop(p);
    }

    cout << endl;
    return 0;
}