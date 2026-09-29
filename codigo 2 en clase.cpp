#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	char nom[15];
	float sm,aum,ns;
	int nc,as;
	cout<<"nombre"<<endl;
	cin>>nom ;
	cout<<"sueldo mens:"<<endl;
	cin>>sm;
	cout<<"num cursos:"<<endl;
	cin>>nc;
	cout<<"años de servicio:"<<endl;
	cin>>as;
	if(as<5){
		aum=0;
		ns=sm;
	}
	if(as>=5 && as<10 && nc>=2){;
	aum=(sm*0.10)*2;
	ns=sm+aum+1500;
	}
	if(as >= 10 && as<15 && nc>=2){
		aum=(sm*0.10)*3;
		ns=sm+aum+1500;
	}
	if(as >= 15 && as<20 && nc>=2){
		aum=(sm*0.10)*4;
		ns=sm+aum+1500;
	}
	if(as>5 && nc<2){
		aum=0;
		ns=sm;
	}
	cout<<"nombre de trabajador:"<<nom<<endl;
	cout<<"sueldo:"<<sm<<endl;
	cout<<"Aumenento:"<<aum<<endl;
	cout<<"Nuevo sueldo:"<<ns<<endl;
	getch();
	}
	

