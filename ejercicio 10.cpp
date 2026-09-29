#include <iostream>
#include <conio.h>
#include <cmath>
#include <fstream>
using namespace std;
main(){
	double horas,resultado1,resultado2,resultado3;

	ofstream hoja;

	cout<<"Horas totales laboradas";
	cin>>horas;

	resultado1=(horas*25.50);
	resultado2=(resultado1*0.10);
	resultado3=(resultado1+resultado2+100);

	cout<<"horas totales:"<<resultado1<<endl;
	cout<<"incentivo:"<<resultado2<<endl;
	cout<<"total:"<<resultado3<<endl;

	hoja.open("ejercicio10.txt");

	hoja << "==================================" << endl;
    hoja << "        HORAS TRABAJADAS          " << endl;
    hoja << "==================================" << endl;
    hoja << "Horas:    " <<resultado1<<endl;
    hoja << "INCENTIVO: $" <<resultado2<<endl;
    hoja << "TOTAL:   +$" <<resultado3<<endl;
    hoja << "==================================" << endl;
	hoja.close();
	getch();
}
