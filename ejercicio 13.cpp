#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float precio, impuesto, total;

    cout << "Ingrese el costo del articulo: ";
    cin >> precio;

    if (precio <= 20) {
        impuesto = 0;
    } 
    else {
        if (precio <= 40) {
            impuesto = (precio - 20) * 0.30;
        } 
        else {
            if (precio > 500) {
                impuesto = precio * 0.50;
            } 
            else {
                impuesto = (20 * 0.30) + (precio - 40) * 0.40;
            }
        }
    }

    total = precio + impuesto;

    cout << "Precio:   $" << precio << endl;
    cout << "Impuesto: $" << impuesto << endl;
    cout << "Total:    $" << total << endl;

    getch();
}
