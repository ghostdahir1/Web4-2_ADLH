#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;
float funcion1(float n);
float funcion2(float x, float y);
float funcion3(float x);
int funcion4(char pal[]);
void funcion5(char pal1[],char pal2[]); 

int main() {
	float n, raiz;
	float res,x,y ;
	float r;
	float cont;
	char pal[10],pal1[10], pal2[10],opc;
	char resp;
do{
	system("cls");
	system("color 0A");
	cout<<"----seleccione inciso----"<<endl;
	cout<<"a)----- raiz de un numero ----"<<endl;
	cout<<"b)----- potencia de un num ----"<<endl;
	cout<<"c)----- coseno de num ----"<<endl;
	cout<<"d)----- logitud de una palabra ----"<<endl;
	cout<<"e)----- comparar 2 cadenas ----"<<endl;
	cin>>opc;
	switch (opc) {
    case 'a':
    	system("cls");
    	system("color 0A");
	    cout << "digite un numero" << endl;
	    cin >> n;
	    cout << "su con raiz es: " << funcion1(n) << endl;
    break;
    case 'b':
    	system("cls");
    	system("color 0A");
	    cout << "digite su numero " << endl;
	    cin >> x;
	    cout << "digite su potencia " << endl;
	    cin >> y;
	    cout << "su numero es : " << funcion2(x, y) << endl; 
    break;
    case 'c':
    	system("cls");
    	system("color 0A");
	    cout << "digite su numero : " << endl;
	    cin >> x;
	    cout << "el coseno de su num es: " << funcion3(x) << endl;
    break;
    case 'd':
    	system("cls");
    	system("color 0A");
	    cout << "DIGITE SU PALABRA" << endl;
	    cin >> pal;
	    cout << "la longitud de su palabra es : " << funcion4(pal)<<endl;
    break;
    case 'e':
    	system("cls");
    	system("color 0A");
	    cout << "digite su primera palabra: " << endl;
	    cin >> pal1;
	    cout << "digite su segunda palabra : " << endl;
	    cin >> pal2;
	    funcion5(pal1,pal2);
	    cout<<endl;
    break;
    default:
    cout<<"opcion no valida "<<endl;
    break;
	}

cout<<"Desea regresar al menu s/n";
   cin>>resp;
   
}while(resp=='s' || resp=='S');
getch();
}
float funcion1(float n){
	float raiz;
	raiz=sqrt(n);
	return raiz;
}
float funcion2(float x, float y){
	float res;
	res=pow(x,y);
	return res;
}
float funcion3(float x){
	float r;
	r=cos(x);
	return r;
}
int funcion4(char pal[]){
	int c;
	c=strlen(pal);
	return c;
}
void funcion5(char pal1[],char pal2[]) {
	int x; 
	x=strcmp(pal1,pal2);
	if(x==0){
		cout<<"la cadena 1 es igual a la cadena 2";
	} 
	else{
		cout<<"la cadena 1 es diferente a la cadena 2";
	}
}

