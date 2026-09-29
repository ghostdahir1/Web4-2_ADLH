#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int num, re;

    cout << "Ingrese numero entero positivo: ";
    cin >> num;

    if (num > 0) {
        cout << "Secuencia: " << num << " -> ";
        
        while (num > 1) { 
            re = num % 2; 

            if (re == 0) {
                num = num / 2;
            } else {
                num = (num * 3) + 1;
            }
            
            cout << num << " -> ";
        }
        cout << "FIN" << endl;

    } else {
        cout << "El numero debe ser positivo." << endl;
    }

    getch();
}
