#include <iostream>
#include <conio.h>
#include "Grupo3.h"
using namespace std;
void entrada(int a[' '][' '],int lim,int col,int fil);
void f1(int a[' '][' '],int lim,int col,int fil);
void f2(int a[' '][' '],int lim,int col,int fil);
void f3(int a[' '][' '],int lim,int col,int fil);

main(){
	int tabla[' '][' '];
	entrada(tabla,5,10,8);
	f1(tabla,5,40,8);
	f2(tabla,5,40,8);
	f3(tabla,5,40,8);
	getch();
}
void entrada(int a[' '][' '],int lim,int col,int fil){
	int x,y;
	for(x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			gotoxy(col+y*5,fil+x);
			cin>>a[x][y];
		}
	}
}
void f1(int a[' '][' '],int lim,int col,int fil){
	int x,y;
	for(x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			if(x==y){
				a[x][y]=1;
				gotoxy(col+y*5,fil+x);
				cout<<a[x][y];
			}
		}
	}
}

void f2(int a[' '][' '],int lim,int col,int fil){
	int x,y;
	for(x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			if(x>y){
				a[x][y]=0;
				gotoxy(col+y*5,fil+x);
				cout<<a[x][y];
			}
		}
	}
}

void f3(int a[' '][' '],int lim,int col,int fil){
	int x,y;
	for(x=0;x<lim;x++){
		for(y=0;y<lim;y++){
			if(x<y){
				a[x][y]=5;
				gotoxy(col+y*5,fil+x);
				cout<<a[x][y];
			}
		}
	}
}

