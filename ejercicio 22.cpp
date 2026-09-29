#include <iostream>
#include <conio.h>
#include <cmath> 
using namespace std;

int main() {
    int num;
    double suma = 0; 

    cout << "Ingrese hasta que numero (#): ";
    cin >> num;

    for (int x = 1; x <= num; x++) {
        suma = suma + pow(x, x);
        cout << x << "^" << x << " + "; 
    }

    cout << "\nResultado de la suma: " << suma << endl;
    cout << "FIN" << endl;
    getch();
}

