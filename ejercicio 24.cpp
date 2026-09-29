#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int nu;
    long long fact = 1; 

    cout << "Ingresa un numero: ";
    cin >> nu;

    if (nu < 0) {
        cout << "Los negativos no tienen factorial." << endl;
    } else {
        for (int x = 1; x <= nu; x++) {
            fact = fact * x;
            cout << "nu: " << x << " fact: " << fact << endl; 
        }
        cout << "El factorial es: " << fact << endl;
    }

    cout << "FIN" << endl;
    getch();
}
