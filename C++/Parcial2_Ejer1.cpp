#include <iostream>
#include <conio.h>
#include <math.h>
#include "Grupo3.h"
using namespace std;

float funcion1(float n);
float funcion2(float x, float y);
float funcion3(float x);
float funcion4(char pal[]);
float funcion5(char pal1[],char pal2[]);

main(){
	float n,x,y,raiz,res,r;
	int opc,cont;
	char pal[10],pal1[15],pal2[15];
	cout<<"Seleccione una operacion:"<<endl;
	cout<<"1.-Raiz"<<endl;
	cout<<"2.-Potencia"<<endl;
	cout<<"3.-Coseno"<<endl;
	cout<<"4.-Longitud de pal."<<endl;
	cout<<"5.-Comparar cadenas"<<endl;
	cin>>opc;
	switch(opc){
		case 1:{
			cout<<"Valor n"<<endl;
			cin>>n;
			raiz=funcion1(n);
			cout<<"Resultado:"<<raiz<<endl;
			break;
		}
		case 2:{
			cout<<"Valor x"<<endl;
			cin>>x;
			cout<<"Valor y"<<endl;
			cin>>y;
			res=funcion2(x,y);
			cout<<"Resultado:"<<res<<endl;
			break;
		}
		case 3:{
			cout<<"Valor x"<<endl;
			cin>>x;
			r=funcion3(x);
			cout<<"Resultado:"<<r<<endl;
			break;
		}
		case 4:{
			cout<<"Palabra a enumerar:"<<endl;
			cin>>pal;
			cont=funcion4(pal);
			cout<<"Resultado:"<<cont<<endl;
			break;
		}
		case 5:{
			cout<<"Palabra 1"<<endl;
			cin>>pal1;
			cout<<"Palabra 2"<<endl;
			cin>>pal2;
			funcion5(pal1,pal2);
			break;
		}
		default:{
			cout<<"No existe"<<endl;
			break;
		}
	}
getch();	
}
float funcion1(float n){
	float raiz;
	raiz=sqrt(n);
	return raiz;
}
float funcion2(float x,float y){
	float res;
	res= pow(x,y);
	return res;
}
float funcion3(float x){
	float r;
	r=cos(x);
	return r;
}
float funcion4(char pal[]){
	int cont;
	cont=strlen(pal);
	return cont;
}
float funcion5(char pal1[],char pal2[]){
	int x;
	x = strcmp(pal1,pal2);
	if(x==0){
		cout<<"La palabra 1 es igual a la palabra 2.";
	}
	else{
		cout<<"las palabras son diferentes.";
	}
}
