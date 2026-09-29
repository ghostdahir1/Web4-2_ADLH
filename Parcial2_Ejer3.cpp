#include <iostream>
#include <conio.h>

using namespace std;

void funcion1(int num);
void funcion2(int n);
int funcion3(int a);
void funcion4(int a,int b,int suma1,int suma2);

main(){
	int ej,num,n,a,b,sA,sB;
	char resp;
do{
	system("cls");
	system("color 0A");
	cout<<"Seleccione un insiso:"<<endl;
	cout<<"1)collatz"<<endl;
	cout<<"2)perfeto"<<endl;
	cout<<"3)amigos"<<endl;
	cin>>ej;
	switch(ej){
		case 1:{
			system("color 0A");
			cout<<"numero:"<<endl;
			cin>>num;
			funcion1(num);
			break;
		}
		case 2:{
			system("color 0A");
			cout<<"Numero a comprobar:"<<endl;
			cin>>n;
			funcion2(n);
			break;
		}
		case 3:{
			system("color 0A");
			cout<<"Numero A:"<<endl;
			cin>>a;
			cout<<"Numero B:"<<endl;
			cin>>b;
			sA=funcion3(a);
			sB=funcion3(b);
			funcion4(a,b,sA,sB);

			break;
		}
		default:{
			system("color 0A");
			cout<<"No existe";
			break;
		}
	}
cout<<"Desea regresar al menu s/n";
cin>>resp;
}while(resp=='s' || resp=='S');
getch();
}
void funcion1(int num){
	int n;
	do{
	n=num%2;
	if(n==0){
	num=num/2;
	}
	else{
	num=(num*3)+1;
	}
	cout<<num<<" ";
	}while(num!=1);
}
void funcion2(int n){
    int suma = 1, x, y, z;
    y = n / 2;
    for (x = 2; x <= y; x++) {
  	z = n % x;
    if (z == 0)
    suma = suma + x;
    }
    if (suma == n)
    cout<<n<<"es perfeto :)"<<endl;
    else
    cout<<n<<"no es perfeto ;("<<endl;
}
int funcion3(int a){
	int suma=0,x,r;
	for(x=1;x<a;x++){
		r=a%x;
		if (r==0){
			suma= suma + x;
		}
	}
	return suma;
}
void funcion4(int a,int b,int suma1,int suma2){
	if (suma1==b && suma2 == a){
		cout<<"son amigos yeii"<<endl;
	} else{
		cout<<"no son amigos"<<endl;
	}
}
