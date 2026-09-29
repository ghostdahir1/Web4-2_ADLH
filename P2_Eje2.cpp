#include <iostream>
#include <math.h>
#include "Grupo3.h"
#include <conio.h>
using namespace std;

int funcion1( int i);
int funcion2(int x, int y);
void funcion3(int x, int y);
void funcion4();

main(){
	int opc, a, b, num1;
	char resp;
do{
	system("cls");
	system("color 0A");
	cout<<"seleccione un inciso";
	cout<<"1)pares"<<endl;
	cout<<"2)impares"<<endl;
	cout<<"3)primos"<<endl;
	cout<<"4)Figura"<<endl;
	cout<<"seleccione un inciso ";
	cin>>opc;
	switch(opc){
		case 1:
			system("color 0A");
			cout<<"Ingrese el limite de la sucesion: ";
			cin>>num1;
			cout<<"Total de numeros pares: "<<funcion1(a);
		break;
		case 2:
			system("color 0A");
			cout<<"Limite inferior: ";
			cin>>a;
			cout<<"Limite superior: ";
			cin>>b;
			cout<<"Suma de numeros impares: "<<funcion2(a,b);
		break;
		system("color 0A");
		case 3:cout<<"Limite inferior: ";
			cin>>a;
			cout<<"Limite superior: ";
			cin>>b;
			funcion3(a,b);
		break;
		case 4:
			system("color 0A");
			funcion4();
		break;
		default:
			system("color 0A");
			cout<<"No existe inciso";

	}
cout<<"Desea regresar al menu s/n";
cin>>resp;
   
}while(resp=='s' || resp=='S');
getch();
}

int funcion1(int i){
	int e, x, n;
	e=0;
	n = i%2;
	do{
		if(n==0){
			cout<<i<<",";
			x++;
		}
	e++;
	}while(e<i);
	return x;
}
int funcion2(int x, int y){
	int res, n;
	for(x=x; x<=y; x++){
		n= x%2;
		if(n==1){
			cout<<x<<",";
			res= res + x;
		}
	}
	return x;
}
void funcion3(int x, int y){
	int cont, i, d;
	for(x=x;x<=y; x++){
		for(i=1;i<=x;i++){
			d=x%i;
			if(d==0){
				cont = cont + 1;
			}
		}
		if(cont==2){
			cout<<x<<",";
		}
	}
}
void funcion4(){
	int x;
	for(x=0;x<=79;x++){
		gotoxy(3+x, 2); cout<<"_";
		gotoxy(3+x, 22); cout<<"_";
	}
	for(x=0; x<=20;x++){
		gotoxy(3, 3+x); cout<<"|";
		gotoxy(9, 3+x); cout<<"|";
		gotoxy(75, 3+x); cout<<"|";
		gotoxy(81, 3+x); cout<<"|";
	}
}
