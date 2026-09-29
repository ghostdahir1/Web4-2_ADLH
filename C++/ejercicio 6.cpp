#include <iostream>

#include <conio.h>

#include <cmath>

using namespace std;

main(){
	
	float l, b, h, b1, h1, r, b2, h2;
	float area_cuad,perim_cuad;
	float area_tri,perim_tri;
	float area_rect,perim_rect;
	float area_circ,perim_circ;
	float area_romb,perim_romb;
	
	cout<<"cuadrado lado:";
	cin>>l;
	
	cout<<"triangulo base:";
	cin>>b;
	cout<<"triangulo altura:";
	cin>>h;
	
	cout<<"rectangulo base:";
	cin>>b1;
	cout<<"rectangulo altura:";
	cin>>h1;
	
	cout<<"circulo radio:";
	cin>>r;
	
	cout<<"romboide base:";
	cin>>b2;
	cout<<"romboide altura:";
	cin>>h2;
	
	
	area_cuad=l*l;
	perim_cuad=l*4;
	
	area_tri=(b*h)/2;
	perim_tri=2*h+b;
	
	area_rect=b*h1;
	perim_rect=2*b+2*h1;
	
	area_circ=M_PI*r*r;
	perim_circ=2*M_PI*r;
	
	area_romb=b*h2;
	perim_romb=2*b+2+h2;
	
	cout<<"area de cuadrado:"<<area_cuad<<endl;
	cout<<"perimetro cuadrado:"<<perim_cuad<<endl;
	
	cout<<"base traingulo:"<<area_tri<<endl;
	cout<<"perimetro triangulo:"<<perim_tri<<endl;
	
	cout<<"base rectangulo:"<<area_rect<<endl;
	cout<<"perimetro rectangulo:"<<perim_rect<<endl;
	
	cout<<"radio circulo:"<<area_circ<<endl;
	cout<<"perimetro circulo:"<<perim_circ<<endl;
	
	cout<<"base romboide:"<<area_romb<<endl;
	cout<<"perimetro romboide:"<<perim_romb<<endl;
	
	getch(); 
}
