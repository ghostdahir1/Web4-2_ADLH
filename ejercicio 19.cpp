#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	float total,pago,min;
	int clave;
    
	cout<<"-------------------------------------------------"<<endl;	
	cout<<"clave"<<endl;
	cout<<"12)america 18)europa 23)asia 25)africa 29)oceania"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cin >>clave;
	
	cout<<"-------------------------------------------------"<<endl;
	cout<<"minutos : ";
	cin >>min;
	
	switch (clave) {
		case 12 :
			pago=(min*2.50);
			total=(pago*0.01)+pago;
			break;
			
			case 18 :
				pago=(min*5.53);
				total=(pago*0.025)+pago;
				break;
				
				case 23 :
					pago=(min*9);
					total=(pago*0.014)+pago;
					break;
					
					case 25 :
						pago=(min*8.10);
						total=(pago*0.05)+pago;
						break;
						
						case 29 :
							pago=(min*7.20);
							total=(pago*0.013)+pago;
							break;
							      
								default:
								cout<<"clave incorrecta"<<endl;
								total=0;
								break;					
	}

    cout<<"-------------------------------------------------"<<endl;
	cout<<"costo de la llamada :"<<total<<endl;
	cout<<"-------------------------------------------------"<<endl;
	getch();
}
	
