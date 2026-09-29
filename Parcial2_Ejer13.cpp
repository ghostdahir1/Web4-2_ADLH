#include <iostream>
#include <conio.h>
#include "Grupo3.h"
using namespace std;
void entrada(int a[' '][' '],int lim1,int lim2, int col,int fil);
void f1(int a[' '][' '],int lim1,int lim2, int col,int fil,int num);
main(){
	int tabla[' '][' '],num;
	entrada (tabla,3,8,10,8);
	cout<<"numero a buscar";
	cin>>num;
	f1(tabla,3,8,50,8,num);
	getch();
}

void entrada(int a[' '][' '],int lim1,int lim2, int col,int fil){
	int x,y;
	for(x=0;x<lim1;x++){
		for(y=0;y<lim2;y++){
			gotoxy(col+y*5,fil+x);
			cin>>a[x][y];
		}
	}
}

void f1(int a[' '][' '],int lim1,int lim2, int col,int fil,int num){
	int x,y;
	for(x=0;x<lim1;x++){
		for(y=0;y<lim2;y++){
			if(num==a[x][y]){
			a[x][y]=100;
			}
			gotoxy(col+y*5,fil+x);
			cout<<a[x][y];
		}
	}
}
