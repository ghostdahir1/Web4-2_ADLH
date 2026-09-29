#include <iostream>
#include "Grupo3.h"
using namespace std;

struct Producto {
    int cla;
    char nom[50]; 
    float pre;
    int can;
};

void darAlta(Producto inv[], int &tot);
void consultarClave(Producto inv[], int tot);
void consultarNombre(Producto inv[], int tot);
void realizarVenta(Producto inv[], int tot);

int main() {
Producto inv[100]; 
int tot=0, opM, opB;
do {
    system("cls");
    gotoxy(20,2);cout<<"===PUNTO DE VENTA - PAPELERIA===";
    gotoxy(25,4);cout<<"1)Altas";
    gotoxy(25,5);cout<<"2)Consulta";
    gotoxy(25,6);cout<<"3)Ventas";
    gotoxy(25,7);cout<<"4)Salir";
    gotoxy(20,10); cout<<"Opcion: "; cin >> opM;
    switch(opM) {
    case 1: 
		darAlta(inv, tot); 
		break;
    case 2:
    system("cls");
    gotoxy(20,2);cout<<"--- SUBMENU CONSULTA ---";
    gotoxy(20,4);cout<<"1)Clave|2)Nombre->Elige:"; cin >> opB;
    if (opB == 1)consultarClave(inv,tot);
    else if(opB==2)consultarNombre(inv,tot);
    break;
    case 3:realizarVenta(inv,tot);break;
        }
    }while(opM!=4);
    return 0;
}

void darAlta(Producto inv[], int &tot) {
    system("cls");
    if (tot>=100){cout<<"Inventariolleno.\n"; system("pause"); return;}
    gotoxy(20,2);cout<<"---ALTA DE PRODUCTO---";
    gotoxy(20,4);cout<<"Clave:"; cin >> inv[tot].cla;
    gotoxy(20,5);cout<<"Nombre(sin espacios): ";cin>>inv[tot].nom;
    gotoxy(20,6);cout<<"Precio:$"; cin >> inv[tot].pre;
    gotoxy(20,7);cout<<"Stock:";cin>>inv[tot].can;
    tot++;
    gotoxy(20,10);cout<<"Exito.";system("pause");
}

void consultarClave(Producto inv[], int tot){
    system("cls");
    int claB;
    gotoxy(20,2);cout<<"---BUSCAR CLAVE ---\n\Ingresa clave:";cin>>claB;
    for (int i=0;i<tot;i++){
    if (inv[i].cla==claB) {
    gotoxy(20,6);cout<<"->"<<inv[i].nom<<"|$"<<inv[i].pre<<"|Stock:"<<inv[i].can;
    gotoxy(20,9);system("pause");
    return;
        }
  }
gotoxy(20,6);cout<<"Clave no encontrada.";system("pause");
}

void consultarNombre(Producto inv[],int tot) {
    system("cls");
    char nomB[50];
    gotoxy(20,2);cout<<"---BUSCAR NOMBRE---Ingresanombre:";cin>>nomB;
    for(int i=0;i<tot;i++) {
    if(strcmp(inv[i].nom,nomB)==0){
    gotoxy(20,6);cout<<"Clave:"<<inv[i].cla<< "|$"<<inv[i].pre<<"|Stock:"<<inv[i].can;
    gotoxy(20,9);system("pause");
    return; 
    }
}
gotoxy(20,6);cout<<"Nombre no encontrado.";system("pause");
}

void realizarVenta(Producto inv[], int tot) {
    system("cls");
    int claV, canV;
    gotoxy(20, 2);cout<<"---VENTAS ---\n\nClave a vender: ";cin>>claV;
    for (int i = 0;i< tot;i++) {
        if (inv[i].cla==claV) {
            gotoxy(20,6);cout<<"Producto:"<<inv[i].nom<<"(Stock:"<<inv[i].can<<")";
            gotoxy(20,7);cout<<"Cantidad a vender: ";cin>>canV;
            if (canV <= inv[i].can){
                inv[i].can-=canV; 
            gotoxy(20,9);cout<<"Venta exitosa.Total: $"<<(canV*inv[i].pre);
            } else {
                gotoxy(20,9);cout<<"Error: Sin stock suficiente.";
            }
            gotoxy(20,11);system("pause");
            return;
        }
    }
    gotoxy(20,6);cout<<"Producto no encontrado.";system("pause");
}
