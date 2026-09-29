#include <iostream>
#include <conio.h>
using namespace std;
main(){
	float ahorro=0 ,gasto=0 ;
	cout<<"----------------"<<endl;
	cout<<"ahorro :"<<endl;
	cout<<"----------------"<<endl;
	cin>>ahorro;
	cout<<"----------------"<<endl;
	cout<<"gasto :"<<endl;
	cout<<"----------------"<<endl;
	cin>>gasto;
	
	if (ahorro>gasto) {
	
		ahorro=ahorro-gasto;
		gasto=0;
		cout<<"----------------"<<endl;
		cout<<"solvente :)"<<endl;
		cout<<"cantidad de ahorros :"<<ahorro<<endl;
		cout<<"gastos:",gasto;
		cout<<"----------------"<<endl;
	 } else{
		      gasto=gasto-ahorro;
		      ahorro=0;
		      cout<<"----------------"<<endl;
		      cout<<"quiebra :("<<endl;
		      cout<<"gasto: "<<gasto<<endl;
		      cout<<"ahorro: "<<ahorro<<endl;
		      cout<<"----------------"<<endl;
	}
	
	getch();
}
