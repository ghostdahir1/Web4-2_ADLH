#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float cal, s = 0, prom;
    int x = 1; 

    while (x <= 5) {
        cout << "Ingresa Calificacion del alumno " << x << ": ";
        cin >> cal;

        s = s + cal; 
        x = x + 1;   
    }

    prom = s / 5;
    
    cout << "El promedio es: " << prom << endl;
    cout << "Fin" << endl;
    getch();
}

