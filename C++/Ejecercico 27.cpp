#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int limite, sumaDivisores;

    cout << "Ingrese un numero entero positivo: ";
    cin >> limite;

    cout << "Los numeros perfectos entre 1 y " << limite << " son:" << endl;

    
    for (int i = 1; i <= limite; i++) {
        sumaDivisores = 0;

        
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sumaDivisores += j;
            }
        }

        
        if (sumaDivisores == i) {
            cout << i << endl;
        }
    }

    getch();
}
