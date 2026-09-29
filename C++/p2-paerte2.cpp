#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Grupo3.h"
using namespace std;
int main() {
    float num1, num2;
	char opc,resp;
	int aco=0, x=0 ;
do{
	system("cls");
	gotoxy(20,4); cout<<"---------Menu----------";
	gotoxy(20,5); cout<<"---a)Suma de numeros---";
	gotoxy(20,6); cout<<"--b)numero fibonacci---";
	gotoxy(20,7); cout<<"--c)conteo de digitos--";
	gotoxy(20,8); cout<<"-----------------------";
	gotoxy(20,9); cin>>opc;
	system("cls");
	switch(opc){
		do{
		case'a':
			    system("cls");
				gotoxy(15,6); cout<<"	Digite su numero:";
				gotoxy(40,6); cin>>num1;
				while(num1 >= 0){
				x++;
				aco += num1;
				system("cls");
				gotoxy(20, 8); cout << "Llevas sumado: " << aco << "   ";
				gotoxy(20, 6); cout << "Digite otro numero:     ";
                gotoxy(40, 6); cin >> num1;	
			}
			gotoxy(20, 10); cout << "Suma FINAL Total: " << aco;
	gotoxy(20, 15); cout <<"Desea realizar otra suma? s/n";
    gotoxy(60, 15); cin >>resp;
} while (resp == 's' || resp == 'S');
    break;
    default:
	gotoxy(20, 8); cout<<"no existe inciso";
	break;
	}
	
		gotoxy(20, 10); cout<<"Desea regresar al menu s/n";
        gotoxy(60, 10); cin>>resp;
}while(resp=='s' || resp=='S');
}
