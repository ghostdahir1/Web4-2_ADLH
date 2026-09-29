#include <iostream>
#include <conio.h>
#include "grupo3.h"
using namespace std;
struct alumno{
	char nom[10];
	char sexo;
	int edad;
	float prom;
};
void titulos();
void entrada(alumno a[' '],int lim);
void salida(alumno a[' '],int lim);
main(){
	alumno estudiante[3];
	titulos();
	entrada(estudiante,3);
	system("color 67");
	system("cls");
	titulos();
	salida(estudiante,3);
	getch();
}
void titulos(){
	gotoxy(10,5);cout<<"nombre";
	gotoxy(20,5);cout<<"sexo";
	gotoxy(20,6);cout<<"F/M";
	gotoxy(30,5);cout<<"edad";
	gotoxy(40,5);cout<<"Prom";
}
void entrada(alumno a[' '],int lim){
	int x;
	for(x=0;x<lim;x++){
	gotoxy(10,7+x);cin>>a[x].nom;
	gotoxy(20,7+x);cin>>a[x].sexo;
	gotoxy(30,7+x);cin>>a[x].edad;
	gotoxy(40,7+x);cin>>a[x].prom;	
	}
}
void salida(alumno a[' '],int lim){
	int x;
	for(x=0;x<lim;x++){
	gotoxy(10,7+x);cout<<a[x].nom;
	gotoxy(20,7+x);cout<<a[x].sexo;
	gotoxy(30,7+x);cout<<a[x].edad;
	gotoxy(40,7+x);cout<<a[x].prom;	
	}
}
