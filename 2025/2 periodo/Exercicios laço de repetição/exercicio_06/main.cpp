#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int resultado;
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            resultado =  i * j;
            cout<<i <<" X " <<j << " = " <<resultado <<endl;  
        }
        cout<<endl;
    }
    
    return 0;
}