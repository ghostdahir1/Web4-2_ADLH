#include <iostream>
using namespace std;

int main() {
    int numero;
    cout<<"Ingresa un numero para ver su tabla de multiplicar:";
    cin>>numero;

    for(int i=1;i<=10;i++){
        cout<<numero<<"x"<<i<<"="<<numero*i<<"\n";
    }
    cout <<"\n";

    int j=1;
    while (j<=10){
        cout<<numero<<"x"<<j<<"="<<numero*j<<"\n";
        j++; 
    }
    cout<<"\n";
    int k = 1;
    do {
        cout<<numero<<"x"<<k<<"="<<numero*k<<"\n";
        k++;
    } while (k<=10);
}
