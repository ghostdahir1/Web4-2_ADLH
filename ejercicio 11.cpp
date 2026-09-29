#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

main(){
    float horas, salario;
    string nombre;

    cout<<"Ingrese el nombre del trabajador: ";
    cin>>nombre;
    cout<<"Ingrese el total de horas trabajadas: ";
    cin>>horas;

    if (horas <= 40) {
        salario = horas * 80;
    }
    else if (horas > 40 && horas <= 45) {
        salario = (40 * 80) + ((horas - 40) * 90);
    }
    else if (horas > 45 && horas <= 50) {
        salario = (40 * 80) + (5 * 90) + ((horas - 45) * 100);
    }
    else if (horas > 50) {
        salario = (40 * 80) + (10 * 100) + 200;
    }

    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Horas trabajadas: "<<horas<<endl;
    cout<<"Total a pagar: "<<salario;

    getch();
}
