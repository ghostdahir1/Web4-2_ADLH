#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

main(){
	float mon, pag, totalpago;
	char nombre[50];
	
	cout<<"Ingrese el nombre del cliente: ";
    cin>>nombre;
    cout<<"monto total";
    cin>>mon;
    
    if(mon>0 && mon<=1000 ) {
    	pag=mon*0;
	}
	else if(mon > 1000 && mon <= 7000){
	pag=mon*0.05;
	}
	else if(mon>7000){
	pag=mon*0.14;
	}
	
	totalpago=mon-pag;
	
	cout<<"monto de compra:"<<mon<<endl;
	cout<<"descuetnto:"<<pag<<endl;
	cout<<"total del pago"<<totalpago<<endl;
	
	getch();
}

