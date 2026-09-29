#include <iostream>
#include <conio.h>
#include "Grupo3.h"

using namespace std;


void f1(float a[' '][' '],int lim,int col, int fil);
void f2(float a[' '][' '],int lim,int col, int fil);
void entrada(float a[' '][' '],int lim,int col,int fil);
main(){
	float a[' '][' '],b;
	cout<<"limite";
	cin>>b;
	entrada(a,b,10,5);
	f1(a,b,40,5);
	f2(a,b,10,11);
getch();
}
void f1(float a[' '][' '],int lim,int col, int fil){
	int x,y,suma=0;
	for(x=0;x<lim;x++){
		suma=0;
		for(y=0;y<lim;y++){
			suma=suma+a[x][y];
			gotoxy(col,fil+x);
			cout<<"="<<suma;
		}
	}
}

void f2(float a[' '][' '],int lim,int col, int fil){
	int x,y,suma=0;
	for (x=0;x<lim;x++){
		suma=0;
		for(y=0;y<lim;y++){
		suma=suma+a[y][x];
		}
		gotoxy(col,fil+x);
		cout<<"="<<suma;
	}
}

void entrada(float a[' '][' '],int lim,int col,int fil){
	int x,y;
	for (x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			gotoxy(col+y*5,fil+x); cin>>a[x][y];
		}
	}
}
