#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
main(){
	double x1,x2,x3;
	double y1,y2,y3;
	double distancia1, distancia2, distancia3;
	double a,p;
	cout<<"Cordenadas p1,p2,p3.   x1:";
	cin>>x1;
	
	cout<<"cordenada y1:";
	cin>>y1;
	
	cout<<"cordenada x2:";
	cin>>x2;
	
	cout<<"cordenada y2:";
	cin>>y2;
	
	cout<<"cordenada x3:";
	cin>>x3;
	
	cout<<"cordenada y3:";
	cin>>y3;
	
	a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	
	distancia1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	distancia2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	
	distancia3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	
	p=distancia1 + distancia2 + distancia3;
	
	cout<<"perimetro:"<<p<<endl;
	cout<<"Area"<<a<<endl;
	
	getch();
}

