#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Grupo3.h" 

using namespace std;

int main() {
    char password[50];
    char claveCorrecta[] = "1234"; 
    double vi, vf, t, a;
    int longitud;
    int acceso = 0;
    char opcion;
    int repetir = 1;
    do {
        system("cls");
        system("color 1F");
        gotoxy(25, 5); cout << "--- SISTEMA DE SEGURIDAD ---";
        gotoxy(20, 7); cout << "Ingrese clave (Max 4 caracteres): ";
        cin >> password;
        longitud = strlen(password);
        if (longitud > 4) {
            system("color 4F");
            gotoxy(10, 9); 
            cout << "ERROR: Debe ser de 4 caracteres y volver a intentarlo.";
            getch();
        }
        else if (strcmp(password, claveCorrecta) == 0) {
            acceso = 1;
        }
        else {
            gotoxy(20, 9); cout << "Contrasena incorrecta.";
            getch();
        }
    } while (acceso == 0);
    while (repetir == 1) {
        system("cls");
        system("color 0E");
        gotoxy(20, 2); cout << "=== MENU DE ACELERACION (MUA) ===";
        gotoxy(20, 4); cout << "a) Auto de carreras (44 a 88 m/s)";
        gotoxy(20, 5); cout << "b) Bala de rifle (700 a 602 m/s)";
        gotoxy(20, 6); cout << "c) Avion despegando (0 a 72 m/s)";
        gotoxy(20, 7); cout << "d) Atleta (0 a 12 m/s)";
        gotoxy(20, 8); cout << "e) Salir";
        gotoxy(20, 10); cout << "Elija una opcion: ";
        cin >> opcion;
        if (opcion == 'e') {
        repetir = 0; 
        }
        else {
        system("cls"); 
        system("color 0B");
        switch(opcion) {
        case 'a':
        gotoxy(10, 2); cout << "--- Inciso A: Auto ---";
        vi = 44; vf = 88; t = 11;
        a = (vf - vi) / t;
        gotoxy(10, 4); cout << "Datos: Vi=" << vi << ", Vf=" << vf << ", t=" << t;
        gotoxy(10, 6); cout << "ACELERACION = " << a << " m/s^2";
        break;

        case 'b':
        gotoxy(10, 2); cout << "--- Inciso B: Bala ---";
        vi = 700; vf = 602; t = 10;
        a = (vf - vi) / t;
        gotoxy(10, 4); cout << "Datos: Vi=" << vi << ", Vf=" << vf << ", t=" << t;
        gotoxy(10, 6); cout << "ACELERACION = " << a << " m/s^2";
        break;

        case 'c':
        gotoxy(10, 2); cout << "--- Inciso C: Avion ---";
        vi = 0; vf = 72; t = 5;
        a = (vf - vi) / t;
        gotoxy(10, 4); cout << "Datos: Vi=" << vi << ", Vf=" << vf << ", t=" << t;
        gotoxy(10, 6); cout << "ACELERACION = " << a << " m/s^2";
        break;
        case 'd':
        gotoxy(10, 2); cout << "--- Inciso D: Atleta ---";
        vi = 0; vf = 12; t = 4;
        a = (vf - vi) / t;
        gotoxy(10, 4); cout << "Datos: Vi=" << vi << ", Vf=" << vf << ", t=" << t;
        gotoxy(10, 6); cout << "ACELERACION = " << a << " m/s^2";
        break;
        default:
        gotoxy(10, 5); cout << "Opcion no valida.";
            }
        gotoxy(10, 10); 
        system("pause");
        }
    }

    return 0;
}
