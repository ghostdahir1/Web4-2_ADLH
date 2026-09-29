#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Grupo3.h"
using namespace std;
int main() {
	char opc,dia[9],a[]="Lunes",b[]="Miercoles",c[]="Viernes",d1,d2,d3,resp;
	int al, x, re;
	float p1, p2,p3,exa,fn,prompar,calexa;
	float caltra,prom,promgen,parcial,tiemp, total, n, nr, nr1=0, nr2=0;
do{
	
	system("cls");
	gotoxy(20,4); cout<<"---------Menu---------" ;
	gotoxy(20,5); cout<<"a) calificacion";
	gotoxy(20,6); cout<<"b) corredor";
	gotoxy(20,7); cout<<"c) numeros";
	gotoxy(20,8); cout<<"----------------------" ;
	gotoxy(20,9); cin>>opc;
	system("cls");

	switch(opc){
		case 'a':
			cout<<"cantidad de alumnos"<<endl;
			cin>>al;
			for(x=1; x<=al; x++){
				gotoxy(20,4); cout<<"calificacion de parcial:";
				gotoxy(50,4);cin>>p1;
				gotoxy(60,4);cin>>p2;
				gotoxy(70,4);cin>>p3;
				gotoxy(20,6);cout<<"calificacion de examen global";
				gotoxy(20,7);cin>>exa;
				gotoxy(20,8);cout<<"calificacion trabajo final";
				gotoxy(20,9);cin>>fn;
				parcial=((p1+p2+p3)/3);
				prompar=(parcial*0.55);
				calexa=(exa*0.30);
				caltra=(fn*0.15);
				prom=(prompar+calexa+caltra);
				gotoxy(20,10);cout<<"promedio "<<prom<<" Puntos";
				gotoxy(20,11);cout<<"---------------------------";
			}
			break;
			case 'b':
			for(x=1; x<=7; x++){
				system("color 0A");
				gotoxy(20,5); cout<<"Dia:";
				gotoxy(20,6); cin>>dia;
				d1 = strcmp(dia,a);
				d2 = strcmp(dia,b);
				d3 = strcmp(dia,c);
				system("cls");
			if(0 == d1 || 0 == d2 || 0 == d3){
				gotoxy(20,5); cout<<"Tiempo total:";
				gotoxy(20,6); cin>>tiemp;
				system("cls");
				system("pause");
				prom = prom + tiemp;
				}
			else{
				gotoxy(20,5); cout<<"No corre"<<endl;
				system("pause");
				system("cls");
				}
			}
			total = prom / 3;
			gotoxy(20,5); cout<<"Tiempo total:"<<total;
		break;
		case 'c':
			gotoxy(20,6);cout<<"Cuantas veces quieres sumar/restar??: ";
			cin>>re;
			system("cls");
			system("pause");
		for (n=1; n<=re; n++) {
			gotoxy(20,6);cout<<"Numeros reales: ";
			cin>>nr;
			nr1=nr1+nr;
			if(nr2==0){
				nr2=nr;
			}
			else{
				nr2=nr2-nr;
				
			}
			gotoxy(20,7);cout<<"Suma de reales: "<<nr1;
			gotoxy(20,8);cout<<"Resta de reales: "<<nr2;
			system("cls");
			break;
    }
        default:
    	gotoxy(20,7); cout<<"No extiste opcion";
    	break;
   }
   cout<<"Desea regresar al menu s/n";
   cin>>resp;
   
}while(resp=='s' || resp=='S');
getch();
	}


