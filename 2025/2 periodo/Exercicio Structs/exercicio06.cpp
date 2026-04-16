#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <time.h>

#define TAM 2000

using namespace std;

struct Data{
    int mes, ano;
};

struct Gado{
    int codigo;
    float leite;
    float alimento;
    Data nascimento;
    bool abate;

    void criarDados(){
        ofstream meu_arquivo;
        meu_arquivo.open("exercicio06.txt");
        Gado vetor[TAM];
        for(int i = 0; i < TAM; i++){
            Gado temp;
            temp.codigo = rand() % 2000;
            temp.leite = rand() % 1000;
            temp.alimento = rand() % 1000;
            temp.nascimento.ano = rand() % 2025;
            temp.nascimento.mes = rand() % 12;
            while(temp.nascimento.ano <= 2010){
              temp.nascimento.ano = rand() % 2025;
            }

            vetor[i] = temp;

        }
    }
};

int inserirDadosGado(){
    
}

int main(){
    srand(time(NULL));
    int opcao;
    do{
        cout<<"1 - Exibir a quantidade total de leite produzida por semana na fazenda: " <<endl;
        cout<<"2 - Exibir a quantidade total de alimento consumido por semana na fazenda: " <<endl;
        cout<<"3 - Exibir a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate: " <<endl;
        cout<<"4 - Exibir a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate: " <<endl;
        cout<<"5 - Exibir o número de cabeças de gado que irão para o abate: "<<endl;
        cout<<"6 - Sair do programa: " <<endl; 

    }while(opcao != 6);

    return 0;
}