#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Quantos termos da serie de Fibonacci deseja gerar? ";
    cin >> n;

    int a = 0, b = 1;  

    for (int i = 0; i < n; i++) {
        cout << a << " ";   
        int prox = a + b;   
        a = b;             
        b = prox;
    }

    cout << endl;
    return 0;
}
