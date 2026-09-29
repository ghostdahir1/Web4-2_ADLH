#include <iostream>
#include <string>
#include <conio.h>  

using namespace std;
int main() {
	char opc;
	int x ,m;
	float dep , a , p1=70 ,p2=150, p=50;
	cout<<"a)Ahorro"<<endl;
	cout<<"b)Carretera"<<endl;
	cout<<"c)Pago"<<endl;
	cout<<"Seleccione menu"<<endl;
	cin>>opc;
	switch(opc){
		case'a':
		x=1;
		a=0;
		while(x<=12){
			cout<<"desposito :"<<endl;
		cin>>dep;
		a=a+dep;
		cout<<"mes :"<<x<<endl;
		cout<<"ahorro :"<<a<<endl;
		x++;
		}
		break;	
			
		case 'b':
			while(p1 != p2){
				p1++;
			p2--;
			cout<<"persona 1:"<<p1<<"kms"<<endl;
			cout<<"persona 2:"<<p2<<"kms"<<endl;
			}
			cout<<"se veran en :"<<p1<<endl;
			break;
			
			case'c':
				for(m=1; m<=20; m++){
					p=p*2;
					cout<<"mes "<<m<<endl;
					cout<<"pago"<<p<<endl;
				}
				cout<<"total :"<<p<<endl;
				break;
}
	}
	
