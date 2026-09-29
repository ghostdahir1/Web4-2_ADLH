#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	double inver,montohip;
	double resta;
	double prop,socio;
	
	cout <<"_____________________"<<endl;
	cout <<"invercion negocio :"<<endl;
	cout <<"_____________________"<<endl;
	cin >> inver;
	
	cout <<"_____________________"<<endl;
	cout <<"monto hipoteca"<<endl;
	cout <<"_____________________"<<endl;
	cin >> montohip;
	
	if(montohip<500000){
		prop=inver*0.50;
		socio=inver*0.50;
	}      else {	
	       resta=inver-montohip;
		   prop=resta/2;
		   socio=resta/2 ;  
	}
	
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout << "-MONTO TOTAL INTEGRANTES-"<<endl;
	cout << "_____________________"<<endl;
	cout << "invercion negocio :"<<inver<<endl;
	cout << "_____________________"<<endl;
	cout << "hipoteca :"<<montohip<<endl;
	cout << "_____________________"<<endl;
	cout << "socio :"<<socio<<endl;
	cout << "_____________________"<<endl;
	cout << "propietario :"<<prop<<endl;
	cout << "_____________________"<<endl;
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	
	getch();
}
