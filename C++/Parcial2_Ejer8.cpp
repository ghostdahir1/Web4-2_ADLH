#include <iostream>
#include <conio.h>
#include "Grupo3.h"
using namespace std;

void entrada(float a[],int lim,int col, int fil);
void f1 (float a[' '],float b[' '],float c[' '],float d[' '],int fil, int col,int lim);
int f2(float d[' '],int lim);
float f3(float d[' '],int lim);

main(){
	float a[' '], b[' '], c[' '], d[' '];
	float p1,p2,p3,p4;
	int p1a,p2a,p3a,lim;
	
	
	gotoxy(10,2);cout<<"cantidad de alumnos";
	cin>>lim;
	gotoxy(10,4);cout<<"materia mat";
	gotoxy(25,4);cout<<"Materia fis";
	gotoxy(40,4);cout<<"Materia geo";
	entrada(a,lim,10,6);
	entrada(b,lim,25,6);
	entrada(c,lim,40,6);
	f1(a,b,c,d,lim,60,6);
	p1a=f2(a,lim);
	p2a=f2(b,lim);
	p3a=f2(c,lim);
	p1=f3(a,lim);
	p2=f3(b,lim);
	p3=f3(c,lim);
	p4=f3(d,lim);
	gotoxy(10,8);cout<<"aprovados mat:",p1a;
	gotoxy(15,8);cout<<"aprovados fis:",p2a;
	gotoxy(20,8);cout<<"aprovados geo:",p3a;
	gotoxy(10,10);cout<<"prom mat",p1;
	gotoxy(15,10);cout<<"prom fis",p2;
	gotoxy(20,10);cout<<"prom geo",p3;
	gotoxy(25,10);cout<<"prom gen",p4;
}

void entrada(float a[],int lim,int col, int fil){
	int x;
	for(x=0; x<lim; x++){
	gotoxy(col+x*5,fil);cin>>a[x];
	}
}

void f1 (float a[' '],float b[' '],float c[' '],float d[' '],int fil, int col,int lim){
	int x;
	for(x=0;x<lim;x++){
	d[' ']=(a[' ']+b[' ']+c[' '])/3;
	}gotoxy(col,fil+x*2);cout<<d[' '];	
}

int f2(float d[' '],int lim){
	int x, cont=0;
	for(x=0;x<lim;x++){
		if(d[' ']==7){
			cont++;
		}
	}
	return cont;
}

float f3(float d[' '],int lim){
	int x;
	float suma=0;
	for (x=0;x<lim;x++){
	suma=suma+d[' '];
	} suma=suma/lim;
	return suma;
}
