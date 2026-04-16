#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Data{
    int dia, mes, ano;

    void solicitarData(){
        cin>>dia;
        cin>>mes;
        cin>>ano;
    }

};

int verificaData(Data a){
    if(a.dia > 31 && a.dia <= 0 && a.mes > 12 && a.mes <=0 ){
        cout<<"Data invalida, coloque um dia e mês correto! " <<endl;
    }if(a.mes == 2 && a.dia > 28){
        cout<<"O mes de fevereiro só possui 28 dias! " <<endl;
    }
}   

int main(){
    Data a;
    a.solicitarData();



    return 0;
}