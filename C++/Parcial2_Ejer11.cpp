#include <iostream>
#include <conio.h>
#include "Grupo3.h"

using namespace std;
void entrada(int a[' '][' '],int lim,int col,int fil);
void funcion2(int a[' '][' '],int lim,int col,int fil);
void funcion1(int a[' '][' '],int lim,int col,int fil);

main(){
	int tabla[' '][' '];
	entrada(tabla,5,10,8);
	funcion1(tabla,5,40,8);
	funcion2(tabla,5,10,16);
	getch(); 
}


void entrada(int a[' '][' '],int lim,int col,int fil){
	int x,y;
	for(x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			gotoxy(col+y*5,fil+x);
			cin>>a[x][y];
		}
	}
}

void funcion1(int a[' '][' '],int lim,int col,int fil){
	int x,y,suma;
	for (x=0;x<lim;x++){
	suma = 0;
	for(y=0;y<lim;y++){
		suma=suma+a[x][y];
		gotoxy(col,fil+x);
		cout<<"="<<suma;
	}
}
}

void funcion2(int a[' '][' '],int lim,int col,int fil){
	int x,y,suma;
	for (x=0;x<lim;x++){
	suma = 0;
	for(y=0;y<lim;y++){
		suma=suma+a[y][x];
		gotoxy(col+y*5,fil);
		cout<<"="<<suma;
	}
}
}
