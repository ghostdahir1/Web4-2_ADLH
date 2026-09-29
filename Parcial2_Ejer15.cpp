#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "Grupo3.h"
using namespace std;

void entrada(int a[' '][' '],int lim, int col, int fil);
void funcion1(int a[' '][' '],int lim, int col, int fil);
void funcion2(int a[' '][' '],int lim, int col, int fil);
void funcion3(int a[' '][' '], int lim,int col, int fil);

main(){
	int tabla[' '][' '];
	int op;
	system("cls");
	cout<<"Datos:"<<endl;
	entrada(tabla,4,10,5);
	
	do {
	    system("cls");
    	cout<<"Selecciona un inciso: \n";
    	cout<<"1)Promedio por fila\n";
    	cout<<"2)Maximos por columna\n";
    	cout<<"3)Buscar y reemplazar valor\n";
    	cout<<"4)Salir\n";
    	cin>>op;
    	
    	switch(op){
    		case 1:
    			funcion1(tabla,4,40,5);
    			break;
    		case 2:
    			funcion2(tabla,4,40,10);
    			break;
    		case 3:
    			funcion3(tabla,4,40,10);
    			break;
    		case 4:
    		    break;
    		default:
    			gotoxy(40,10); cout<<"No existe";
    			getch();
    		}
	} while (op != 4);
	
	system("cls");
    getch();
}

void entrada(int a[' '][' '],int lim, int col, int fil){
	int f,c;
	for(f=0;f<lim;f++){
		for(c=0;c<lim;c++){
			gotoxy(col+c*2,fil+f);
			cin>>a[f][c];
		}
	}
}

void funcion1(int a[' '][' '],int lim, int col, int fil){
	int f,c;
	float suma,prom;

	for(f=0;f<lim;f++){		
		suma=0;
		for(c=0;c<lim;c++){
			suma=suma+a[f][c];	
		}
		prom=suma/lim;
		gotoxy(col,fil+f);
		cout<< "="<<prom;		
	}
	getch();	
}

void funcion2(int a[' '][' '],int lim, int col, int fil){
	int f,c,maximo;

	for(c=0;c<lim;c++){		
		maximo = a[0][c]; 
		for(f=1;f<lim;f++){
			if(a[f][c]>maximo){
				maximo=a[f][c];
			}
		}
		gotoxy(col,fil+c);
		cout<<"Max col "<<c<<": "<<maximo;
	}	
	getch();
}

void funcion3(int a[' '][' '], int lim, int col, int fil){
	int f,c,valor,nuevo;
	gotoxy(40,5); cout<<"Valor: ";
	gotoxy(40,6);cin>>valor;
	gotoxy(40,7);cout<<"Nuevo valor: ";
	gotoxy(40,8);cin>>nuevo;
	for(f=0;f<lim;f++){
		for(c=0;c<lim;c++){
			if(a[f][c]==valor){
				a[f][c]=nuevo;
			}
		}
	}
	for(f=0;f<lim;f++){
		for(c=0;c<lim;c++){
			gotoxy(col+c*2,fil+f);cout<<a[f][c];
		}
	}
	getch();
}
