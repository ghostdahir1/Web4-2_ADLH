#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
//prototipos de funciones
float funcion1(float L1,float L2,float L3,float Lados);
float funcion2(float L1,float L2,float L3);
//funcion principal
main(){
	float a,b,c,d;
	cout <<"valor de L1,L2,L3:";
	cin>>a>>b>>c;
	d=funcion2(a,b,c);
	cout<<"area de triangulo:"<<funcion1(a,b,c,d);
	getch();
}
float funcion1(float L1,float L2,float L3,float Lados){
	float area;
	area=sqrt((Lados*(Lados-L1)*(Lados-L2)*(Lados-L3)));
	return area;
}
float funcion2(float L1,float L2,float L3){
	float lados;
	if(L1>0&&L2>0&&L3>0){
		lados=(L1+L2+L3)/2;
	}
	else{
		cout<<"no se puede calcular area"<<endl;
		lados=0;
	}
	return lados;
}
