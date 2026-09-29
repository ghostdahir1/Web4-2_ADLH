#include <iostream>
#include <conio.h>
using namespace std;

void entrada (float a[],int lim);
float f2 (float a[],int lim);
int main() {
	float precios[' '];
	int cant;
	
	cout<<"cuantos art"<<endl;
	cin>>cant;
	cout<<"precios de articulos"<<endl;
	entrada(precios,cant);
	cout<<"total a pagar:"<<f2(precios,cant);
	getch();
}

void entrada (float a[],int lim){
	int x;
	for(x=0 ; x<lim ; x++){
		cin>>a[x];
	}
}

float f2 (float a[],int lim){
	int x,tot=0;
	for (x=0;x<lim;x++){
		tot=tot+a[x];
	}
	return tot;
}

