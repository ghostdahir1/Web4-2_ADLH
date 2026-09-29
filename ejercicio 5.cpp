#include <iostream>
#include <conio.h>
using namespace std;
main(){
	float edad,no;
	char nom[50];
	cout<<"nombre:";
	cin>>nom;
	cout<<"edad:";
	cin>>edad;
	no=(220-edad)/10;
	cout<<"nombre persona"<<nom<<endl;
	cout<<"numero pulsaciones"<<no<<endl;
	getch(); 
}
