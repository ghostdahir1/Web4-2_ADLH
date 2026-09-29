#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Grupo3.h"
using namespace std;
struct Producto{
int clave;
char nombre[50];
float precio;
int cantidad;
};

int total=0;
void darAlta(Producto inv[]);
void consultarClave(Producto inv[]);
void consultarNombre(Producto inv[]);
void realizarVenta(Producto inv[]);

int main(){
Producto inv[100];
int opcMenu,opcBusqueda;
do{
system("cls");
gotoxy(20,2);cout<<"===PUNTO DE VENTA - PAPELERIA===";
gotoxy(25,4);cout<<"1)Altas";
gotoxy(25,5);cout<<"2)Consulta";
gotoxy(25,6);cout<<"3)Ventas";
gotoxy(25,7);cout<<"4)Salir";
gotoxy(20,10);cout<<"Opcion: ";
cin>>opcMenu;
switch(opcMenu){
case 1:darAlta(inv);break;
case 2:
system("cls");
gotoxy(20,2);cout<<"--- SUBMENU CONSULTA ---";
gotoxy(20,4);cout<<"1) Clave | 2) Nombre -> Elige: ";
cin>>opcBusqueda;
if(opcBusqueda==1)consultarClave(inv);
else if(opcBusqueda==2)consultarNombre(inv);
break;
case 3:realizarVenta(inv);break;
}
}while(opcMenu!=4);
return 0;
}

void darAlta(Producto inv[]){
system("cls");
if(total>=100){cout<<"Inventario lleno.\n";system("pause");return;}
gotoxy(20,2);cout<<"---ALTA DE PRODUCTO---";
gotoxy(20,4);cout<<"Clave:";cin>>inv[total].clave;
gotoxy(20,5);cout<<"Nombre(sin espacios): ";cin>>inv[total].nombre;
gotoxy(20,6);cout<<"Precio:$";cin>>inv[total].precio;
gotoxy(20,7);cout<<"Stock:";cin>>inv[total].cantidad;
total++;
gotoxy(20,10);cout<<"Exito.";system("pause");
}

void consultarClave(Producto inv[]){
system("cls");
int claveBuscada;
gotoxy(20,2);cout<<"--- BUSCAR CLAVE --- \nIngresa clave: ";cin>>claveBuscada;
for(int i=0;i<total;i++){
if(inv[i].clave==claveBuscada){
gotoxy(20,6);cout<<"-> "<<inv[i].nombre<<" | $"<<inv[i].precio<<" | Stock: "<<inv[i].cantidad;
gotoxy(20,9);system("pause");
return;
}
}
gotoxy(20,6);cout<<"Clave no encontrada.";system("pause");
}

void consultarNombre(Producto inv[]){
system("cls");
char nomBuscado[50];
gotoxy(20,2);cout<<"---BUSCAR NOMBRE---Ingresanombre:";cin>>nomBuscado;
for(int i=0;i<total;i++){
if(strcmp(inv[i].nombre,nomBuscado)==0){
gotoxy(20,6);cout<<"Clave:"<<inv[i].clave<<"|$"<<inv[i].precio<<"|Stock:"<<inv[i].cantidad;
gotoxy(20,9);system("pause");
return;
}
}
gotoxy(20,6);cout<<"Nombre no encontrado.";system("pause");
}

void realizarVenta(Producto inv[]){
system("cls");
int claveVenta,cantVenta;
gotoxy(20,2);cout<<"---VENTAS ---\n\nClave a vender: ";cin>>claveVenta;
for(int i=0;i<total;i++){
if(inv[i].clave==claveVenta){
gotoxy(20,6);cout<<"Producto:"<<inv[i].nombre<<"(Stock:"<<inv[i].cantidad<<")";
gotoxy(20,7);cout<<"Cantidad a vender: ";cin>>cantVenta;
if(cantVenta<=inv[i].cantidad){
inv[i].cantidad-=cantVenta;
gotoxy(20,9);cout<<"Venta exitosa.Total: $"<<(cantVenta*inv[i].precio);
}else{
gotoxy(20,9);cout<<"Error: Sin stock suficiente.";
}
gotoxy(20,11);system("pause");
return;
}
}
gotoxy(20,6);cout<<"Producto no encontrado.";system("pause");
}
