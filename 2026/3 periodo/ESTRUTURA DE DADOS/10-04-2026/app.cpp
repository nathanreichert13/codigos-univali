#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;


bool algoritmoA(int* v, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j])
                return true;
        }
    }
    return false;
}

int comparar(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool algoritmoB(int* v, int n) {
    int* copia = (int*)malloc(n * sizeof(int));
    memcpy(copia, v, n * sizeof(int));

    qsort(copia, n, sizeof(int), comparar);

    bool encontrou = false;
    for (int i = 0; i < n - 1; i++) {
        if (copia[i] == copia[i + 1]) {
            encontrou = true;
            break;
        }
    }

    free(copia);
    return encontrou;
}


#define TAMANHO_HASH 100003 

bool algoritmoC(int* v, int n) {
    int* tabela = (int*)malloc(TAMANHO_HASH * sizeof(int));
    memset(tabela, -1, TAMANHO_HASH * sizeof(int));

    bool encontrou = false;

    for (int i = 0; i < n; i++) {
        int chave = abs(v[i]) % TAMANHO_HASH;

        while (tabela[chave] != -1) {
            if (tabela[chave] == v[i]) {
                encontrou = true;
                goto fim;  
            }
            chave = (chave + 1) % TAMANHO_HASH;
        }
        tabela[chave] = v[i];
    }

fim:
    free(tabela);
    return encontrou;
}


void gerarSemDuplicata(int* v, int n) {
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
        
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = v[i]; v[i] = v[j]; v[j] = tmp;
    }
}


double medirTempo(bool (*algo)(int*, int), int* v, int n) {
    clock_t inicio = clock();
    algo(v, n);
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC * 1000.0;
}


int main() {
    srand(42); 

    int tamanhos[] = {5000, 20000, 50000};
    int qtd = 3;

    cout << "======================================================" << endl;
    cout << "   ANALISE DE COMPLEXIDADE - ELEMENTOS DUPLICADOS     " << endl;
    cout << "======================================================" << endl;
    cout << "Cenario: PIOR CASO (vetor sem duplicatas)" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "  N        | Algo A (ms) | Algo B (ms) | Algo C (ms)" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int t = 0; t < qtd; t++) {
        int n = tamanhos[t];
        int* vetor = (int*)malloc(n * sizeof(int));

        gerarSemDuplicata(vetor, n);

        double tA = medirTempo(algoritmoA, vetor, n);
        double tB = medirTempo(algoritmoB, vetor, n);
        double tC = medirTempo(algoritmoC, vetor, n);

        printf("  %-9d| %-11.3f| %-11.3f| %-11.3f\n", n, tA, tB, tC);

        free(vetor);
    }

    cout << "------------------------------------------------------" << endl;
    cout << "\nLegenda de complexidade:" << endl;
    cout << "  Algoritmo A (Forca Bruta):        O(n^2)" << endl;
    cout << "  Algoritmo B (Ordenacao+Varredura): O(n log n)" << endl;
    cout << "  Algoritmo C (Hash):                O(n) medio" << endl;
    cout << "======================================================" << endl;

    return 0;
}