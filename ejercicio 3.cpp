#include <iostream>
#include <conio.h>
using namespace std;
main(){
	char Nomemp[25];
	float Si,Isr,St,Ret,tot;
	cout<<"escribe tu nombre:";
	cin>>Nomemp;
	cout<<"saldo inicial:";
	cin>>Si;
	Isr=Si*.15;
	St=Si+Isr;
	Ret=Si*.10;
	tot=St-Ret;
	cout<<"nombre empleado"<<Nomemp<<endl;
	cout<<"Isr"<<Isr<<endl;
	cout<<"el subtotal es"<<St<<endl;
	cout<<"la retencion es"<<Ret<<endl;
	cout<<"total a pagar"<<tot<<endl;
	getch(); 
	}
	 
