#include <iostream>
using namespace std;

#define MAX 5

struct Fila {
    string dados[MAX];
    int inicio;
    int fim;
};

void inicializar(Fila &f) {
    f.inicio = 0;
    f.fim = 0;
}

bool estaVazia(Fila f) {
    return (f.inicio == f.fim);
}

bool estaCheia(Fila f) {
    return (f.fim == MAX);
}

void enqueue(Fila &f, string nome) {
    if (estaCheia(f)) {
        cout << "Fila cheia!\n";
        return;
    }
    f.dados[f.fim] = nome;
    f.fim++;
}

void imprimirProximo(Fila &f) {
    if (estaVazia(f)) {
        cout << "Fila vazia! Nada para imprimir.\n";
        return;
    }

    cout << "Imprimindo arquivo: " << f.dados[f.inicio] << endl;
    f.inicio++;
}

int main() {
    Fila fila;
    inicializar(fila);

    enqueue(fila, "arquivo1.pdf");
    enqueue(fila, "foto.png");
    enqueue(fila, "documento.docx");

    imprimirProximo(fila);
    imprimirProximo(fila);
    imprimirProximo(fila);
    imprimirProximo(fila); // fila vazia

    return 0;
}