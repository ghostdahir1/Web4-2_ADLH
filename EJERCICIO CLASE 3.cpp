#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
	char opc;
	float v,t,d;
	int g,p,e,pf;
	cout<<"a) max. rec movil"<<endl;
	cout<<"b)partidos puntos"<<endl;
	cout<<"SELECCIONAR INCISO"<<endl;
	cin>>opc;
	
	switch(opc){
	case 'a':
		cout<<"velocidad mts: "<<endl;
		cin>>v;
		cout<<"tiempo(seg): "<<endl;
		cin>>t;
		d=v*t;
		cout<<"distancia="<<d<<"mts"<<endl;
		break;
	
	case 'b':
		cout<<"partidos ganados"<<endl;
		cin>>g;
		cout<<"a)partidos empatados"<<endl;
		cin>>e;
		cout<<"a) partidos perdidos"<<endl;
		cin>>p;
		pf=(g*3)+(e*1)+(p*0);
		cout<<"puntos finales"<<pf<<endl;
		break;
	
	default:
	cout<<"NO EXISTE"<<endl;
	}

	getch();	
}

