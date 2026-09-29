#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int funcion1(int te, int tt);
int funcion2(int ap,int re);
int funcion3(int nP,int nL);

int main() {
	int opc,te,tt,ap,re,nP,nL;
	cout<<"-------menu-------"<<endl;
	cout<<"1) vuelo de avion"<<endl;
	cout<<"2) aprob y rep"<<endl;
	cout<<"3) avance libro"<<endl;
	cout<<"----sekeccione caso----"<<endl;
	cin>>opc;
	switch (opc){
		case 1:
			cout<<"tiempo de vuelo en min"<<endl;
			cin>>te;
			cout<<"tiempo transcurrido"<<endl;
			cin>>tt;
			cout<<"porcentaje de vuelo"<<funcion1(te,tt)<<endl;
			break;
		case 2:
			cout<<"num alum apr"<<endl;
			cin>>ap;
			cout<<"num alum rep"<<endl;
			cin>>re;
			cout<<"procentaje aprobados"<<funcion2(ap,re)<<endl;
			cout<<"porcentajde reprobados"<<funcion2(re,ap)<<endl;
			break;
		case 3:
			cout<<"num de pag de libro"<<endl;
			cin>>nP;
			cout<<"num de pag leidas"<<endl;
			cin>>nL;
			cout<<"procentaje de avance"<<funcion3(nP,nL)<<endl;
			break;
	}
	getch();
}
int funcion1(int te, int tt){
	int porcentaje;
	porcentaje=(tt*100)/te;
	return porcentaje;
}
int funcion2(int a,int r){
	int total,pA;
	total=a+r;
	pA=(a*100)/total;
	return pA;
}
int funcion3(int nP,int nL){
	int porL;
	porL=((nP*100)/nL);
	return porL;
}

