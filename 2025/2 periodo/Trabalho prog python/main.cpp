#include <iostream>
#include <stdio.h>

using namespace std;

void verificarUsuario(){
    int idade;
    cout<<"Digite a sua idade" <<endl;
    cin>>idade;
    if(idade >= 18 and idade <=60){
        cout<<"voto obrigatório" <<endl;
    }else{
        cout<<"penis"<<endl;
    }
}

int main(){
    verificarUsuario();
    return 0;
}