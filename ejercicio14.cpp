#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    string materia;
    float cal_examen, cal_tarea, promedio_final;
    float puntos_examen = 0, puntos_tarea = 0;

    cout << "Ingrese nombre de la materia (mate, prog, com): ";
    cin >> materia;
    
    cout << "Ingrese calificacion examen: ";
    cin >> cal_examen;
    
    cout << "Ingrese calificacion tarea: ";
    cin >> cal_tarea;

    if (materia == "mate") {
        puntos_examen =( (85 * cal_examen) / 100);
        puntos_tarea  =( (15 * cal_tarea) / 100);
    }
    else {
        if (materia == "prog") {
            puntos_examen =( (60 * cal_examen) / 100);
            puntos_tarea  =( (40 * cal_tarea) / 100);
        }
        else {
            if (materia == "com") {
                puntos_examen =( (90 * cal_examen) / 100);
                puntos_tarea  =( (10 * cal_tarea) / 100);
            }
        }
    }

    promedio_final = puntos_examen + puntos_tarea;

    cout << "-----------------------" << endl;
    cout << "Materia:  " << materia << endl;
    cout << "Promedio: " << promedio_final << endl;
    cout << "-----------------------" << endl;

    getch();

}
