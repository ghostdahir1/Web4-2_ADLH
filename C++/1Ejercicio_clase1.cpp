#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	char sel1;
	float rad,area,perm,n1,n2,n3,n4,prom,a,b,c;
	cout<<"a)radio circulo"<<endl;
	cout<<"b)promedio"<<endl;
	cout<<"c)numero 1 y 2"<<endl;
	cout<<"d)salir"<<endl;
	cout<<"seleccione inciso"<<endl;
	cin>>sel1;
	switch(sel1){;
		case 'a':
		cout<<"radio"<<endl;
		cin>>rad;
		area=3.1416*pow(rad,2);
		perm=2*3.1416*rad;
		cout<<"Area:"<<area<<endl;
		cout<<"Perimetro:"<<perm<<endl;
		break;
		case 'b':
			cout<<"notas 4"<<endl;
			cin>>n1>>n2>>n3>>n4;
			prom=(n1+n2+n3+n4)/4;
			cout<<"promedio:"<<prom<<endl;
			break;
			case 'c':
				cout<<"cateto A"<<endl;
				cin>>a;
				cout<<"cateto B"<<endl;
				cin>>b;
				c=sqrt(pow(a,2)+pow(b,2));
				cout<<"Hipotenusa:"<<c<<endl;
				break;
				case 'd':
					cout<<"salir"<<endl;
					break;
					default:
						cout<<"ERROR"<<endl;
	}
	getch();
}
