#include <iostream>
#include <conio.h>
#include <cmath>
#include <fstream>
using namespace std;
main(){
	double discount, ctotal, iva, total;
	char  produc[50];
	
	ofstream hoja;
	
	cout<<"producto:";
	cin>>produc;
	
	cout<<"compra total:";
	cin>>ctotal;
	
	discount=(ctotal*0.12);
	iva=(ctotal*0.16);
	total=ctotal-discount-iva;
	
	cout<<"compra total:"<<ctotal<<endl;
	cout<<"iva:"<<iva<<endl;
	cout<<"descuento:"<<discount<<endl;
	cout<<"Total:"<<total<<endl;
	getch();

hoja.open("ejercicio9.txt"); 
    
    
    hoja << "==================================" << endl;
    hoja << "        TIENDA DE ABARROTES       " << endl;
    hoja << "==================================" << endl;
    hoja << "Producto:    " << produc << endl;
    hoja << "Precio Base: $" << ctotal << endl;
    hoja << "IVA (16%):   +$" << iva << endl;
    hoja << "Desc (12%):  -$" << discount << endl;
    hoja << "----------------------------------" << endl;
    hoja << "TOTAL FINAL: $" << total << endl;
    hoja << "==================================" << endl;
    
    hoja.close(); 

    getch();
}
	
