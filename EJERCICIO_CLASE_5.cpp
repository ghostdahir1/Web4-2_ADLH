#include <iostream>
#include <conio.h>
#include "Grupo3.h"
using namespace std;
main(){
	char fig;
	int resp;
	do{
	system("color 4f");
	system("cls");
    gotoxy(30,4);cout<<"a) circulo";
	gotoxy(30,6);cout<<"b) triangulo";
	gotoxy(30,8);cout<<"Seleccione figura";
	gotoxy(50,8);cin>>fig;

	switch(fig){
		case 'a':
			system("cls");
			system("color 1e");
			cout<<"soy un circulo"<<endl;
			system("pause");
			break;
			case 'b':
				system("cls");
				system("color 1e");
				cout<<"soy un triangulo"<<endl;
				system("pause");
				break;
				      default:
				      system("cls");
				      system("color 1e");
			          cout<<"no existe figura";
				      system("pause");
	}
	cout << "\n¿Desea otro inciso s/n --> ";
    cin >> resp;
	} while (resp == 's' || resp == 'S');
}
