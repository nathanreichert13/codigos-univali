#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> 

using namespace std;

#define TAM 10

int main() {
    int matriz[TAM][TAM];
    int maioresLinhas[TAM];
    int menoresColunas[TAM];

    srand(time(0)); // Sorteio diferente a cada execução

    // Inicializar os vetores
    for (int i = 0; i < TAM; i++) {
        maioresLinhas[i] = INT_MIN;   // Começa com o menor número possível
        menoresColunas[i] = INT_MAX;  // Começa com o maior número possível
    }

    // Preencher a matriz com valores aleatórios e calcular os vetores
    cout << "Matriz:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100; // Valores de 0 a 99
            cout << matriz[i][j] << "\t";

            // Verifica maior da linha
            if (matriz[i][j] > maioresLinhas[i]) {
                maioresLinhas[i] = matriz[i][j];
            }

            // Verifica menor da coluna
            if (matriz[i][j] < menoresColunas[j]) {
                menoresColunas[j] = matriz[i][j];
            }
        }
        cout << endl;
    }

    // Exibir vetor com os maiores de cada linha
    cout << "\nMaiores elementos de cada linha:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Linha " << i << ": " << maioresLinhas[i] << endl;
    }

    // Exibir vetor com os menores de cada coluna
    cout << "\nMenores elementos de cada coluna:\n";
    for (int j = 0; j < TAM; j++) {
        cout << "Coluna " << j << ": " << menoresColunas[j] << endl;
    }

    return 0;
}
