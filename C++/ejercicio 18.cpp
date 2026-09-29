#include <iostream>
	#include <conio.h>
	using namespace std;
	int main() {
		float sue,horasex,pago;
		int cat;
		cout<<"________________________________________________________________________"<<endl;
		cout <<"sueldo base :"<<endl;
		cout<<"________________________________________________________________________"<<endl;
		cin>> sue;
		
	    cout<<"________________________________________________________________________"<<endl;
		cout<<"Horas extra :"<<endl;
		cout<<"________________________________________________________________________"<<endl;
		cin>> horasex;
		
		cout<<"________________________________________________________________________"<<endl;
		cout<<"1(empleado. 2(tecnico 3(confianza 4(administrador 5(Sin categoria"<<endl;
		cout<<"________________________________________________________________________"<<endl;
		cin>> cat;
		
		switch (cat) {
			case 1: 
			     cout<<"empleado :"<<endl;
			     pago=sue + (horasex*85.90);
			break;
			     
			      case 2: 
			     cout<<"tecnico :"<<endl; 
			     pago=sue +(horasex*110.5);
			break;     
			
			             case 3: 
			     cout<<"confianza :"<<endl;
			     pago=sue +(horasex*115.80);
			break;	 
		    
			                   case 4: 
			     cout<<"Administrador :"<<endl;
			     pago=sue +(horasex*130);
			break;	 
			
			default :
			     cout<<"No existe categoria ;"<<endl; 	      
			}
			
		cout<<"pago total"<<pago<<endl;
		cout<<"________________________________________________________________________"<<endl;
			getch();
			
	}
