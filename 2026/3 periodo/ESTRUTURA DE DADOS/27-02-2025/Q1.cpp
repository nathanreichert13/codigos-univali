#include <iostream> 
#include <stdio.h>

using namespace std;

int main(){
    int num1;
    cin>>num1;
    if(num1 > 0 ){
        cout<<"Numero positivo: " <<num1 <<endl;
    }else if(num1 < 0){
        cout<<"Numero negativo: " <<num1 <<endl;
    }else{
        cout<<"O numero é negativo: " <<num1 <<endl ;
    };
    
     if(num1 % 2 == 0){
        cout<<"O numero é par:  " <<num1 <<endl;
    }else{
        cout<<"O numero é impar: " <<num1 <<endl;
    }

    return 0;
}