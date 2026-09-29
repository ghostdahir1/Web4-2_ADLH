#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
main(){

	char matalum[50], nomalum[50], asignatura[50];
	float Parcial_1, Parcial_2, Parcial_3, Cal_global,r,r1,Promedio;

	cout<<"Nombre alumn@:";
	cin>>nomalum;

	cout<<"Matricula alumno:";
	cin>>matalum;

	cout<<"asignatura:";
	cin>>asignatura;

	cout<<"Parcial 1:";
	cin>>Parcial_1;

	cout<<"Parcial 2:";
	cin>>Parcial_2;

	cout<<"Parcial 3:";
	cin>>Parcial_3;

	cout<<"Cal_global:";
	cin>>Cal_global;
	
	r=((Parcial_1+Parcial_2+Parcial_3)/3)*.70;
	r1=Cal_global*.30;
	Promedio=r+r1;
	
	cout<<"Nombre alumn@:"<<nomalum<<endl;
	cout<<"Numero de matricula:"<<matalum<<endl;
	cout<<"asignatura:"<<asignatura<<endl;
	cout<<"Calificacion total"<<Promedio<<endl;
	
	getch(); 
}


