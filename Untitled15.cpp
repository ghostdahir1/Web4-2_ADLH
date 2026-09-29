#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    double monto, inversion, banco, credito, interes;

    cout << "Ingrese el monto de la compra: ";
    cin >> monto;

    if (monto > 500000) {
        inversion = monto * 0.55;
        banco = monto * 0.30;
        credito = monto * 0.15;
    } else {
        inversion = monto * 0.70;
        banco = 0;
        credito = monto * 0.30;
    }

    interes = credito * 0.20;

    cout << "Inversion Empresa: $" << inversion << endl;
    cout << "Prestamo Banco:    $" << banco << endl;
    cout << "Credito Fabrica:   $" << credito << endl;
    cout << "Interes Fabrica:   $" << interes << endl;
    cout << "Total a Pagar:     $" << (monto + interes) << endl;
    getch();
}

  

