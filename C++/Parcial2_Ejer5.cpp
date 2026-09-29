#include <iostream>
#include <conio.h>
#include "Grupo3.h"
using namespace std;

float a[' '],b[' '];
int lim,col,fil;
void entrada(float a[],int lim,int col, int fil);
void fun1(float a[],float b[],int lim, int col,int fil);
void fun2(float a[],float b[],int lim, int col,int fil);
void fun3(float a[],float b[],int lim, int col,int fil);
void fun4(float a[],float b[],int lim, int col,int fil);

main(){
	float v1[3],v2[3],v3[3],v4[3],v5[3],v6[3],v7[3],v8[3];
	
	gotoxy(20,5);cout<<"Suma";
	gotoxy(18,8);cout<<"+";
	gotoxy(20,10);cout<<"____________";
	
	entrada(v1,3,20,7);
	entrada(v2,3,20,9);
	suma(v1,v2,3,20,12);
	
	gotoxy(50,5);cout<<"Resta";
	gotoxy(48,8);cout<<"-";
	gotoxy(50,10);cout<<"____________";
	
	entrada(v3,3,50,7);
	entrada(v4,3,50,9);
	resta(v3,v4,3,50,12);
	
	gotoxy(20,15);cout<<"Multiplicacion";
	gotoxy(18,17);cout<<"*";
	gotoxy(20,19);cout<<"____________";
	
	entrada(v5,3,20,16);
	entrada(v6,3,20,18);
	multi(v5,v6,3,20,20);
	
	gotoxy(50,15);cout<<"Division";
	gotoxy(48,17);cout<<"/";
	gotoxy(50,19);cout<<"____________";
	
	entrada(v7,3,50,16);
	entrada(v8,3,50,18);
	div(v7,v8,3,50,20);
getch;
}
void entrada(float a[],int lim,int col, int fil){
	int x;
	for(x=0; x<lim; x++){
	gotoxy(col+x*5,fil);cin>>a[x];
	}
}
void fun1(float a[],float b[],int lim, int col,int fil){
	int x;
	float c[' '];
	for(x=0;x<lim;x++){
		c[x]=a[x]+b[x];
		gotoxy(col+5*x,fil);cout<<c[x];
	}
}
void fun2(float a[],float b[],int lim, int col,int fil){
	int x;
	float c[' '];
	for(x=0;x<lim;x++){
		c[x]=a[x]-b[x];
		gotoxy(col+5*x,fil);cout<<c[x];
	}
}
void fun3(float a[],float b[],int lim, int col,int fil){
	int x;
	float c[' '];
	for(x=0;x<lim;x++){
		c[x]=a[x]*b[x];
		gotoxy(col+5*x,fil);cout<<c[x];
	}
}
void fun4(float a[],float b[],int lim, int col,int fil){
	int x;
	float c[' '];
	for(x=0;x<lim;x++){
		c[x]=a[x]/b[x];
		gotoxy(col+5*x,fil);cout<<c[x];
	}
}
