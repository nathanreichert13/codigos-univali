#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
    int a[5];
    int temp;
    for(int i =0 ;i <5; i++){
        cout<<"Digite os valores de A: ";
        cin>>a[i];
    }

    for(int i = 0; i < 5; i++){
        a[i] = a[4 - i];
        cout <<a[i]  <<endl;
    }

   


    return 0;
}