#include <iostream>
using namespace std;

struct No {
    char valor;
    No* prox;
};

// Empilhar
void push(No* &topo, char c) {
    No* novo = new No();
    novo->valor = c;
    novo->prox = topo;
    topo = novo;
}

// Desempilhar
void pop(No* &topo) {
    if (topo != nullptr) {
        No* temp = topo;
        topo = topo->prox;
        delete temp;
    }
}

// Verificar se está vazia
bool vazia(No* topo) {
    return topo == nullptr;
}

int main() {
    No* topo = nullptr;
    string expressao;

    cout << "Digite a expressao: ";
    cin >> expressao;

    bool balanceado = true;

    for (char c : expressao) {
        if (c == '(') {
            push(topo, c);
        } 
        else if (c == ')') {
            if (vazia(topo)) {
                balanceado = false;
                break;
            }
            pop(topo);
        }
    }

    // Se ainda tem coisa na pilha → erro
    if (!vazia(topo)) {
        balanceado = false;
    }

    if (balanceado) {
        cout << "Parenteses balanceados!" << endl;
    } else {
        cout << "Parenteses NAO balanceados!" << endl;
    }

    return 0;
}