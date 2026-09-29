#include <iostream>
#include <conio.h>
#include "Grupo3.h"

using namespace std;


void entrada(float valores[], int total, int columna);
float f1(float valores[], int total);
float f2(float valores[], int total);
float f3(float v[], int total);
void f4(float res[], float e1[], float e2[], float e3[], float e4[], int total);
void f5(float datos[], float referencia, int total, int columna);

int main() {
    float mes1[31],mes2[31],mes3[31],mes4[31],promedios[31],mediaGlobal;

    entrada(mes1,31,5);
    entrada(mes2,31,25);
    entrada(mes3,31,45);
    entrada(mes4,31,65);
    gotoxy(5,35);cout<<"Pico Ene:"<<f1(mes1,31);
    gotoxy(25,35);cout<<"Pico Feb:"<<f1(mes2,31);
    gotoxy(45,35);cout<<"Pico Mar:"<<f1(mes3,31);
    gotoxy(65,35);cout<<"Pico Abr:"<<f1(mes4,31);
    gotoxy(5, 37);cout<<"Bajo Ene:"<<f2(mes1,31);
    gotoxy(25, 37);cout<<"Bajo Feb:"<<f2(mes2,31);
    gotoxy(45, 37);cout<<"Bajo Mar:"<<f2(mes3,31);
    gotoxy(65, 37);cout<<"Bajo Abr:"<<f2(mes4,31);
    
	f4(promedios,mes1,mes2,mes3,mes4,31);
    mediaGlobal=f3(promedios,31);
    gotoxy(30, 40);
    cout<<"Media Total:"<<mediaGlobal;
    f5(mes1,mediaGlobal,31,5);
    f5(mes2,mediaGlobal,31,25);
    f5(mes3,mediaGlobal,31,45);
    f5(mes4,mediaGlobal,31,65);

    getch();
    return 0;
}

void entrada(float valores[], int total, int columna) {
    int i;
    gotoxy(columna, 1); cout << "REGISTRO";
    for (i = 0; i < total; i++) {
        gotoxy(columna, 2 + i);
        cout << "Dia " << i + 1 << ": ";
        cin >> valores[i];
    }
}

float f1(float valores[], int total) {
    float alto = valores[0];
    for (int i = 0; i < total; i++) {
        if (valores[i] > alto) {
            alto = valores[i];
        }
    }
    return alto;
}

float f2(float valores[], int total) {
    float bajo = valores[0];
    for (int i = 0; i < total; i++) {
        if (valores[i] < bajo) {
            bajo = valores[i];
        }
    }
    return bajo;
}

float f3(float v[], int total) {
    float suma = 0;
    for (int i = 0; i < total; i++) {
        suma += v[i];
    }
    return (suma / total);
}

void f4(float res[], float e1[], float e2[], float e3[], float e4[], int total) {
    for (int i = 0; i < total; i++) {
        res[i] = (e1[i] + e2[i] + e3[i] + e4[i]) / 4;
        gotoxy(90, 2 + i);
        cout << res[i];
    }
}

void f5(float datos[], float referencia, int total, int columna) {
    for (int i = 0; i < total; i++) {
        if (datos[i] >= referencia) {
            gotoxy(columna, 42 + i);
            cout << datos[i];
        }
    }
}
